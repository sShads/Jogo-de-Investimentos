#include <iostream>
#include "Rendimentos.cpp"
using namespace std;

class Medio: public Rendimento{
    
    public:
        
        int getRendM(){
            return valor;
        }
};