#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

/**
 * @brief Classe abstrata responsável para servir de base para a criação de outras figuras geométricas. Possui o método abstrato virtual puro "draw" que será reimplementado pelas classes concretas.
 */

class FiguraGeometrica{
protected:
    float r, g, b;
public:
    virtual ~FiguraGeometrica(){}
    /**
     * @brief draw - Função virtual pura que irá chamar o método draw das outras classes para realizar o desenho de uma figura
     * @param s escultor
     */
    virtual void draw(Sculptor &s)=0;
};

#endif // FIGURAGEOMETRICA_H
