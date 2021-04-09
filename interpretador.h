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
    /**
     * @brief parse Função responsável pela leitura do arquivo escultor.txt para desenhar as figuras geométricas 3D
     * @param filename Nome do arquivo
     * @return retorna um ponteiro com todos os desenhos das figuras geométricas colocados no arquivo
     */
    vector<FiguraGeometrica*> parse(string filename);
    int getDimx();
    int getDimy();
    int getDimz();
};

#endif // INTERPRETADOR_H
