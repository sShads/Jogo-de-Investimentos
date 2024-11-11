#include <iostream>
#include "Rendimento.cpp"
using namespace std;

class Medio: public Rendimento{
    
    public:
        Medio(string nivel, int valor):
      Rendimento(nivel,valor) {}

        int getRendM(){
            return valor;
        }
};