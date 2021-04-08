#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include "FiguraGeometrica.h"
#include <vector>
#include <string>

using namespace std;

/**
 * @brief Responsável pela leitura do arquivo .txt com os comandos de desenho e tamanho do escultor digital.
 */

class Interpretador{
protected:
    int dimx, dimy, dimz;
    float r, g ,b;
public:
    Interpretador();
    vector<FiguraGeometrica*> parse(string filename);
    int getDimx();
    int getDimy();
    int getDimz();
};

#endif // INTERPRETADOR_H
