#include <iostream>

#include "sculptor.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "putvoxel.h"
#include "interpretador.h"

#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    Sculptor *s1;
    Sculptor s(30,20,30);

    Interpretador parser;

    vector<FiguraGeometrica*> figs;

    figs = parser.parse("D:/DCA2020.2/git-parte-2/Escultor3D-Parte2/escultor.txt");

    s1 = new Sculptor(parser.getDimx(), parser.getDimy(),parser.getDimz());

    for(size_t i=0; i<figs.size(); i++) {
        figs[i]->draw(*s1);
    }
    s1->writeOFF((char*)"D:/saida-ok.off");
    for(size_t i=0; i<figs.size(); i++){
        delete figs[i];
    }
    delete s1;
    return 0;
}
