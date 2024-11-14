#pragma once
#include <iostream>
#include "Jogo.cpp"
#include "Rendimento.cpp"
#include "Baixo.cpp"
#include "Medio.cpp"
#include "Alto.cpp"
using namespace std;

class CentralDeInvestimento{
    protected:

        string nomedoinvestimento;
        Rendimento* rendimento[3];
        Baixo b;
        Medio m;
        Alto a;
        //Dificuldade d;

    public:

        CentralDeInvestimento(string nomedoinvestimento):
        nomedoinvestimento{nomedoinvestimento}{}

        string getNomedoBanco(){
            return nomedoinvestimento;
        }
};