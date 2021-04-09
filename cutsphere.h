#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "FiguraGeometrica.h"
#include "sculptor.h"

/**
 * @brief Responsável por retirar uma esfera com as coordenadas do seu centro (xc, yc, zc) e de raio r.
 */

class CutSphere : public FiguraGeometrica{
protected:
    int xc, yc, zc, radius;
public:
    /**
     * @brief CutSphere - Construtor
     * @param xc_ coordenada do centro da esfera no eixo x
     * @param yc_ coordenada do centro da esfera no eixo y
     * @param zc_ coordenada do centro da esfera no eixo z
     * @param radius_ raio da esfera
     * @param r_ cor vermelha (red)
     * @param g_ cor verde (green)
     * @param b_ cor azul (blue)
     */
    CutSphere(int xc_, int yc_, int zc_, int radius_, float r_, float g_, float b_);
    ~CutSphere(){};
    /**
     * @brief draw - Função de desenho para retirar uma esfera de acordo com as coordenadas do construtor
     * @param s escultor
     */
    void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
