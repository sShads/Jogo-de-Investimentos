#pragma once
#include <iostream>
#include "Rendimento.cpp"
using namespace std;

class Baixo: public Rendimento{
    
    public:

        virtual void atualizar(int max,int risco){
            rendimento=100+(-(risco) + (rand()%(max)));
            cout<<"Rendimento Baixo: "<<rendimento-100<<"%"<<endl;
        }
        
};
/*
Banco itau("Itau",19,7);//112-142-203
Banco Santander("Santader",14,5);//109-131-176
Banco Bradesco("Bradesco",7,2);//105-116-139
Banco Nubank("Nubank",4,1);//103-109-122
*/