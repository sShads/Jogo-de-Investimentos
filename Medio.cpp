#pragma once
#include <iostream>
#include "Rendimento.cpp"
using namespace std;

class Medio: public Rendimento{
    
    public:

        virtual void atualizar(int max,int risco){
            rendimento=99+(-(risco*2) + (rand()%(max*3)));
            cout<<"Rendimento Medio: "<<rendimento-100<<"%"<<endl;
        }

};