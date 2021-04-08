#ifndef PUTBOX_H
#define PUTBOX_H
#include "FiguraGeometrica.h"
#include "sculptor.h"

/**
 * @brief Responsável por adicionar uma caixa encontrada nas coordenadas entre x0 e x1, y0 e y1, z0 e z1.
 */

class PutBox : public FiguraGeometrica{
protected:
    int x0, y0, z0, x1, y1, z1;
public:
    PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_);
    ~PutBox(){}
    void draw(Sculptor &s);
};

#endif // PUTBOX_H
