#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "FiguraGeometrica.h"
#include "sculptor.h"

/**
 * @brief Responsável por adicionar uma elipse nas coordenadas calculadas com os parâmetros xc, yc, zc, rx, ry, rz.
 */

class PutEllipsoid : public FiguraGeometrica{
protected:
    int xc, yc, zc, rx, ry, rz;
public:
    /**
     * @brief PutEllipsoid - Construtor
     * @param xc_ coordenada do centro do elipsoide no eixo x
     * @param yc_ coordenada do centro do elipsoide no eixo y
     * @param zc_ coordenada do centro do elipsoide no eixo z
     * @param rx_ parâmetro que determina forma do elipsoide no eixo x
     * @param ry_ parâmetro que determina forma do elipsoide no eixo y
     * @param rz_ parâmetro que determina forma do elipsoide no eixo z
     * @param r_ cor vermelha (red)
     * @param g_ cor verde (green)
     * @param b_ cor azul (blue)
     */
    PutEllipsoid(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_, float r_, float g_, float b_);
    ~PutEllipsoid(){};
    /**
     * @brief draw Função de desenho para retirar uma elipse de acordo com as coordenadas do construtor
     * @param s Escultor
     */
    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_H
