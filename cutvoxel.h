#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "FiguraGeometrica.h"
#include "sculptor.h"

class CutVoxel: public FiguraGeometrica
{
    int x, y, z;
public:
    CutVoxel(int x_, int y_, int z_, float r_, float g_, float b_);
    ~CutVoxel(){}
    void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
