#pragma once
#include <iostream>
#include "Rendimento.cpp"
using namespace std;

class Alto: public Rendimento{

    public:
    
        virtual void atualizar(int max,int risco){
            rendimento=98+(-(risco*4) + (rand()%(max*7)));
            cout<<"Rendimento Alto: "<<rendimento-100<<"%"<<endl;
        }

};