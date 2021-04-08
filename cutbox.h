#ifndef CUTBOX_H
#define CUTBOX_H
#include "FiguraGeometrica.h"
#include "sculptor.h"

/**
 * @brief Responsável por retirar uma caixa encontrada nas coordenadas entre x0 e x1, y0 e y1, z0 e z1.
 */

class CutBox : public FiguraGeometrica{
protected:
    int x0, x1, y0, y1, z0, z1;
public:
    CutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_);
    ~CutBox(){};
    void draw(Sculptor &s);
};

#endif // CUTBOX_H
