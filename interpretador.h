#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include "FiguraGeometrica.h"
#include <vector>
#include <string>

using namespace std;

class Interpretador{
protected:
    int dimx, dimy, dimz;
public:
    Interpretador();
    vector<FiguraGeometrica*> parse(string filename);
    int getDimx();
    int getDimy();
    int getDimz();
};

#endif // INTERPRETADOR_H
