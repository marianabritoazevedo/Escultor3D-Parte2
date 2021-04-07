#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include "FiguraGeometrica.h"
#include <vector>
#include <string>

using namespace std;

class Interpretador : public FiguraGeometrica{
public:
    Interpretador();
    vector<FiguraGeometrica*> parse(string filename);
};

#endif // INTERPRETADOR_H
