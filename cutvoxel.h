#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "FiguraGeometrica.h"
#include "sculptor.h"

/**
 * @brief Responsável por retirar um voxel encontrado nas coordenadas x,y,z.
 */

class CutVoxel: public FiguraGeometrica
{
    int x, y, z;
public:
    /**
     * @brief CutVoxel
     * @param x_ valor da coordenada x
     * @param y_ valor da coordenada y
     * @param z_ valor da coordenada z
     * @param r_ cor vermelha (red)
     * @param g_ cor verde (green)
     * @param b_ cor azul (blue)
     */
    CutVoxel(int x_, int y_, int z_, float r_, float g_, float b_);
    ~CutVoxel(){}
    /**
     * @brief draw - Função de desenho para retirar um voxel de acordo com as coordenadas do construtor
     * @param s escultor
     */
    void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
