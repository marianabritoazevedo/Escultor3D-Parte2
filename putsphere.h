#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "FiguraGeometrica.h"
#include "sculptor.h"


class PutSphere : public FiguraGeometrica{
protected:
    int xc, yc, zc, radius;
public:
    PutSphere(int xc_, int yc_, int zc_, int radius_, float r, float g, float b);
    ~PutSphere(){};
    void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
