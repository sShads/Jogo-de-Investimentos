#include <iostream>
#include "Rendimentos.cpp"
using namespace std;

class Baixo: public Rendimento{

    public:

        int getRendB(){
            return valor;
        }
};