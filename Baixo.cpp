#include <iostream>
#include "Rendimento.cpp"
using namespace std;

class Baixo: public Rendimento{

    public:
        Baixo(string nivel, int valor):
      Rendimento(nivel,valor) {}

        int getRendB(){
            return valor;
        }
};