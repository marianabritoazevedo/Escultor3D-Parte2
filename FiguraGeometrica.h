#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

//Esta é uma classe abstrata, não se pode instanciar um objeto da classe Figura Geométrica
/**
 * @brief Classe abstrata responsável para servir de base para a criação de outras figuras geométricas. Possui o método abstrato virtual puro "draw" que será reimplementado pelas classes concretas.
 */

class FiguraGeometrica{
protected:
    float r, g, b;
public:
    virtual ~FiguraGeometrica(){}
    virtual void draw(Sculptor &s)=0;
    //Função virtual pura, irá chamar a função draw das outras classes
};

#endif // FIGURAGEOMETRICA_H
