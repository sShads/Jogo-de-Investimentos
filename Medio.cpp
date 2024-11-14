#pragma once
#include <iostream>
#include "Rendimento.cpp"
using namespace std;

class Medio: public Rendimento{
    
    public:

        virtual void atualizar(int max,int risco){
            rendimento=97+(-(3*risco) + (rand()%(max/2 + (4*risco) + 1)));
            cout<<"Rendimento Baixo: "<<rendimento<<endl;
        }

};