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
    /**
     * @brief PutBox - Construtor
     * @param x0_ valor da coordenada x0 (x inicial)
     * @param x1_ valor da coordenada x1 (x final)
     * @param y0_ valor da coordenada y0 (y inicial)
     * @param y1_ valor da coordenada y1 (y final)
     * @param z0_ valor da coordenada z0 (z inicial)
     * @param z1_ valor da coordenada z1(z final)
     * @param r_ cor vermelha (red)
     * @param g_ cor verde (green)
     * @param b_ cor azul (blue)
     */
    PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_);
    ~PutBox(){}
    /**
     * @brief draw Função de desenho para adicionar um paralelepípedo de acordo com as coordenadas do construtor
     * @param s Escultor
     */
    void draw(Sculptor &s);
};

#endif // PUTBOX_H
