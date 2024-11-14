#pragma once
#include <iostream>
#include "Rendimento.cpp"
using namespace std;

class Alto: public Rendimento{

    public:
        //min + (std::rand() % (max - min + 1));
        virtual void atualizar(int max,int risco){
            rendimento=95+(-(5*risco) + (rand()%(max + (6*risco) + 1)));
            cout<<"Rendimento Baixo: "<<rendimento<<endl;
        }

};