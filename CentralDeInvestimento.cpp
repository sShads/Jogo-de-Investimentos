#pragma once
#include <iostream>
#include "Dificuldade.cpp"
#include "Rendimento.cpp"
using namespace std;

class CentralDeInvestimento{
    private:

        string nomedobanco;
        int min, max;
        Rendimento* banco[5];
    
    public:
        
        //CentralDeInvestimento(string nomedobanco,int min, int max,int baixo, int medio, int alto):
        CentralDeInvestimento(string nomedobanco,int min, int max):
        nomedobanco{nomedobanco},min{min},max{max}{}

        string getNomedoBanco(){
            return nomedobanco;
        }
};