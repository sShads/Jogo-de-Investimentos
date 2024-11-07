#include <iostream>
#include "Rendimentos.cpp"
using namespace std;

class Alto: public Rendimento{

    public:
        
        int getRendA(){
            return valor;
        }
};