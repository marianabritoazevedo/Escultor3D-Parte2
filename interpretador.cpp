#include "interpretador.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"
#include "putvoxel.h"
#include "cutvoxel.h"

using namespace std;

Interpretador::Interpretador()
{

}

vector<FiguraGeometrica*> Interpretador::parse(string filename)
{
    vector<FiguraGeometrica*> figs;
    ifstream fin;
    stringstream ss;
    string s, token;
    fin.open(filename.c_str());
    // Verificando se o fluxo foi aberto
    if(!fin.is_open()){
        cout << "O arquivo seguinte não abriu: " << filename << endl;
        exit(0);
    }
    while(fin.good()){
        getline(fin,s);
        if(fin.good()){
            // Lançando a string s no fluxo ss
            ss.clear();
            ss.str(s);
            ss >> token;
            // Realizando o parse dos tokens
            if(ss.good()){
                // Verificando dimensões do objeto
                if(token.compare("dim") == 0){
                    //ss >> dimx >> dimy >> dimz; -> Descobrir aonde realizar a declaração dimx, dimy e dimz
                }
                else if(token.compare("putvoxel") == 0){
                    int x0, y0, z0;
                    ss >> x0 >> y0 >> z0 >> r >> g >> b;
                    figs.push_back(new PutVoxel(x0,y0,z0,r,g,b));
                }
                else if(token.compare("cutvoxel") == 0){
                    int x0, y0, z0;
                    ss >> x0 >> y0 >> z0 >> r >> g >> b;
                    figs.push_back(new CutVoxel(x0,y0,z0,r,g,b));
                }
                else if(token.compare("putbox") == 0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b;
                    figs.push_back(new PutBox(x0,x1,y0,y1,z0,z1,r,g,b));
                }
                else if(token.compare("cutbox") == 0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b;
                    figs.push_back(new CutBox(x0,x1,y0,y1,z0,z1,r,g,b));
                }
                else if(token.compare("putsphere") == 0){
                    int xc, yc, zc, raio;
                    ss >> xc >> yc >> zc >> raio >> r >> g >> b;
                    figs.push_back(new PutSphere(xc,yc,zc,raio,r,g,b));
                }
                else if(token.compare("cutsphere") == 0){
                    int xc, yc, zc, raio;
                    ss >> xc >> yc >> zc >> raio >> r >> g >> b;
                    figs.push_back(new CutSphere(xc,yc,zc,raio,r,g,b));
                }
                else if(token.compare("putellipsoid") == 0){
                    int x, y, z, rx, ry, rz;
                    ss >> x >> y >> z >> rx >> ry >> rz >> r >> g >> b;
                    figs.push_back(new PutEllipsoid(x,y,z,rx,ry,rz,r,g,b));
                }
                else if(token.compare("cutellipsoid") == 0){
                    int x, y, z, rx, ry, rz;
                    ss >> x >> y >> z >> rx >> ry >> rz >> r >> g >> b;
                    figs.push_back(new CutEllipsoid(x,y,z,rx,ry,rz,r,g,b));
                }
            }
        }
    }
    return(figs);
}

int Interpretador::getDimx()
{
    return dimx;
}

int Interpretador::getDimy()
{
    return dimy;
}

int Interpretador::getDimz()
{
    return dimz;
}
