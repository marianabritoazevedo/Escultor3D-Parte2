#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "FiguraGeometrica.h"
#include "sculptor.h"

/**
 * @brief Responsável por adicionar um voxel encontrado nas coordenadas x,y,z.
 */

class PutVoxel: public FiguraGeometrica
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
    PutVoxel(int x_, int y_, int z_, float r_, float g_, float b_);
    ~PutVoxel(){}
    /**
     * @brief draw Função de desenho para adicionar um voxel de acordo com as coordenadas do construtor
     * @param s Escultor
     */
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_H
