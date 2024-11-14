#pragma once
#include <iostream>
#include "Rendimento.cpp"
using namespace std;

class Baixo: public Rendimento{
    
    public:

        virtual void atualizar(int max,int risco){
            rendimento=99+(-(2*risco) + (rand()%(max/3 + (3*risco) + 1)));
            cout<<"Rendimento Baixo: "<<rendimento<<endl;
        }        

};