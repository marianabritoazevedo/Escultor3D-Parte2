#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "FiguraGeometrica.h"
#include "sculptor.h"


class CutEllipsoid : public FiguraGeometrica{
protected:
    int xc, yc, zc, rx, ry, rz;
public:
    CutEllipsoid(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_, float r_, float g_, float b_);
    ~CutEllipsoid(){};
    void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_H