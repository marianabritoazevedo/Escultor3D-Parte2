#ifndef SCULPTOR_H
#define SCULPTOR_H


struct Voxel {
  float r,g,b; // Colors
  bool isOn; // Included or not
};


class Sculptor {
protected:
  Voxel ***v; //Matriz 3D
  int nx,ny,nz; // Dimensões da matriz
  float r,g,b; // Cores da matriz
public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  void setColor(float _r, float _g, float _b);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void writeOFF(char *filename);
};

#endif // SCULPTOR_H