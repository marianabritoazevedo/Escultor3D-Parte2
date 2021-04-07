#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "FiguraGeometrica.h"
#include "sculptor.h"

class CutSphere : public FiguraGeometrica{
protected:
    int xc, yc, zc, radius;
public:
    CutSphere(int xc_, int yc_, int zc_, int radius_, float r_, float g_, float b_);
    ~CutSphere(){};
    void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
