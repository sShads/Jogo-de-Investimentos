#include <iostream>
#include "Rendimento.cpp"
using namespace std;

class Alto: public Rendimento{

    public:
        Alto(string nivel, int valor):
      Rendimento(nivel,valor) {}

        int getRendA(){
            return valor;
        }
};