#include "sculptor.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;
    v = new Voxel**[nx];
    for(int i=0; i<nx; i++){
        v[i] = new Voxel*[ny];
        for(int j=0; j<ny; j++){
            v[i][j] = new Voxel[nz];
        }
    }
    for(int i=0; i<nx; i++){
        for(int j = 0; j < ny; j++){
            for(int k = 0; k < nz; k++){
                v[i][j][k].isOn = false;
            }
        }
    }
}

Sculptor::~Sculptor()
{
    for (int x = 0; x < nx; x++) {
       for (int y = 0; y < ny; y++) {
         delete[] v[x][y];
       }
     }
     for (int x = 0; x < nx; x++) {
       delete[] v[x];
     }
     delete[] v;
}

void Sculptor::setColor(float _r, float _g, float _b)
{
    r = _r;
    g = _g;
    b = _b;
}

void Sculptor::putVoxel(int x0, int y0, int z0)
{
    v[x0][y0][z0].isOn = true;
    v[x0][y0][z0].r = r;
    v[x0][y0][z0].g = g;
    v[x0][y0][z0].b = b;
}

void Sculptor::cutVoxel(int x0, int y0, int z0)
{
    v[x0][y0][z0].isOn = false;
}

void Sculptor::writeOFF(char *filename)
{
    int total, index, x, y, z;
    float lado = 0.5;
    ofstream f;
    total = 0;
    f.open(filename);
    f << "OFF\n";
    //Contando a quantidade de voxels ativos
    for(x=0;x<nx; x++){
        for(y=0;y<ny;y++){
            for(z=0;z<nz;z++){
                if(v[x][y][z].isOn == true){
                    total++;
                }
            }
        }
    }
    //Escreve o número de vértices e faces (arestas sempre será 0)
    f << total*8 << " " << total*6 << " 0 \n";
    for(x=0;x<nx; x++){
        for(y=0;y<ny;y++){
            for(z=0;z<nz;z++){
                if(v[x][y][z].isOn == true){
                    //escreve os vértices do cubo
                    f << x - lado << " " << y + lado << " " << z - lado << "\n" << flush; //Vértice 0
                    f << x - lado << " " << y - lado << " " << z - lado << "\n" << flush; //Vértice 1
                    f << x + lado << " " << y - lado << " " << z - lado << "\n" << flush; //Vértice 2
                    f << x + lado << " " << y + lado << " " << z - lado << "\n" << flush; //Vértice 3
                    f << x - lado << " " << y + lado << " " << z + lado << "\n" << flush; //Vértice 4
                    f << x - lado << " " << y - lado << " " << z + lado << "\n" << flush; //Vértice 5
                    f << x + lado << " " << y - lado << " " << z + lado << "\n" << flush; //Vértice 6
                    f << x + lado << " " << y + lado << " " << z + lado << "\n" << flush; //Vértice 7
                  }
            }
        }
    }

    total = 0;
    //Escreve os índices das faces pulando de 8 em 8 vértices
    for(x=0;x<nx; x++){
      for(y=0;y<ny;y++){
        for(z=0;z<nz;z++){
          if(v[x][y][z].isOn == true){
            index = total*8;
            //face 0
            f << fixed;
            f << 4 << " " << index + 0 << " " << index + 3 << " " << index+2 << " " << index+1 << " ";
            f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << "\n";
            //face 1
            f << 4 << " " << index + 4 << " " << index + 5 << " " << index+6 << " " << index+7 << " ";
            f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << "\n";
            //face 2
            f << 4 << " " << index + 0 << " " << index + 1 << " " << index+5 << " " << index+4 << " ";
            f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << "\n";
            //face 3
            f << 4 << " " << index + 0 << " " << index + 4 << " " << index+7 << " " << index+3 << " ";
            f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << "\n";
            //face 4
            f << 4 << " " << index + 3 << " " << index + 7 << " " << index+6 << " " << index+2 << " ";
            f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << "\n";
            //face 5
            f << 4 << " " << index + 1 << " " << index + 2 << " " << index+6 << " " << index+5 << " ";
            f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << "\n";
            //incrementa total de cubos
            total++;

          }
        }
      }
    }
    f.close();
}
