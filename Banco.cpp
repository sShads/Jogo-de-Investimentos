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
            cout<<"Opcao "<<i<<" - Risco "<<risco<<" - Banco "<<nomedobanco<<endl;
            for(int i=0;i<3;i++){
                rends[i]->atualizar(max,risco);
            }
            cout<<endl;
        }

        string verificarrendimento(int n){
            if(n==0)
                return "Baixo";
            else if(n==1)
                return "Medio";
            else
                return "Alto";
        }

        int investir(int n, int dinheiro){
            cout<<endl<<"-------------------------------"<<endl;
            cout<<"Banco : "<<nomedobanco<<endl<<"Rendimento: "<<verificarrendimento(n)<<endl;
            cout<<"Valor atual do rendimento: "<<rends[n]->getRendimento()-100<<"%"<<endl;
            cout<<"-------------------------------"<<endl;
            dinheiro=(dinheiro*(rends[n]->getRendimento()))/100;
            return dinheiro;
        }

        void tabeladerendimentos(int i){
            cout<<"Opcao "<<i+1<<" - Risco "<<risco<<" - Banco "<<nomedobanco<<endl;
            cout<<"Rendimento Baixo:\t"<<-risco<<"%"<<"\t---\t"<<-risco + max<<"%"<<endl;
            cout<<"Rendimento Medio:\t"<<-(risco*2)-1<<"%"<<"\t---\t"<<-1 -(risco*2) + (max*3)<<"%"<<endl;
            cout<<"Rendimento Alto:\t"<<-(risco*4)-2<<"%"<<"\t---\t"<<-2 -(risco*4) + (max*7)<<"%"<<endl<<endl;
        }
};