#include <iostream>
using namespace std;

class Rendimento{
    protected:

        string nivel;
        int valor;
    
    public:

    Rendimento(string nivel, int valor):
    nivel{nivel}, valor{valor}{}

    int getValor(){
      this -> valor = valor + rand() %4-2;
      cout << nivel << ": Valor lido = " << this->valor << endl;
      return this -> valor;
    }

    virtual void print(){
      cout << nivel << ": Valor atual = " << valor << endl;
    }
        
};