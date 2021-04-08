#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "FiguraGeometrica.h"
#include "sculptor.h"

/**
 * @brief Responsável por adicionar uma esfera com as coordenadas do seu centro (xc, yc, zc) e de raio r.
 */

class PutSphere : public FiguraGeometrica{
protected:
    int xc, yc, zc, radius;
public:
    PutSphere(int xc_, int yc_, int zc_, int radius_, float r_, float g_, float b_);
    ~PutSphere(){};
    void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
