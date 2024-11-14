#pragma once
#include <iostream>
#include "Rendimento.cpp"
#include "Baixo.cpp"
#include "Medio.cpp"
#include "Alto.cpp"
using namespace std;

class Banco{

    private:

        Rendimento* rends[3];
        Alto a;
        Medio m;
        Baixo b;
        string nomedobanco;
        int max,risco;

    public:

        Banco(string nomedobanco,int max,int risco):
            nomedobanco{nomedobanco},a{a},m{m},b{b},max{max},risco{risco}{
            rends[0]=&b;
            rends[1]=&m;
            rends[2]=&a;
            }

        void atualizarbanco(int i){
            cout<<endl<<"Rendimentos do banco "<<nomedobanco<<" - Opcao "<<i<<endl;
            for(int i=0;i<3;i++){
                rends[i]->atualizar(max,risco);
            }
        }

        int investir(int n, int dinheiro){
            cout<<endl<<"====="<<endl<<"Banco Escolhido: "<<nomedobanco<<endl;
            cout<<"Rendimento atual do investimento: "<<rends[n]->getRendimento()endl<<"====="<<endl;
            dinheiro=(dinheiro*(rends[n]->getRendimento()))/100;
            return dinheiro;
        }
};