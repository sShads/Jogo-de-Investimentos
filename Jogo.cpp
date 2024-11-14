#pragma once
#include <iostream>
using namespace std;

class Jogo{
    private:

        string dificuldade;
        int dinheiro,rodada=1;
    
    public:
        
        void DefinirDificuldade(int dif){
            if(dif==1){
                dificuldade="Facil";
                this->dinheiro=20000;
            }
            if(dif==2){
                dificuldade="Medio";
                this->dinheiro=10000;
            }
            if(dif==3){
                dificuldade="Dificil";
                this->dinheiro=5000;
            }
        }

        void setDificuldade(int dif){
            this->dinheiro=dif;
        }

        int getDificuldade(){
            return dinheiro;
        }

        int getRodada(){
            return rodada;
        }

        void PassarRodada(){
            this->rodada=rodada+1;
        }

        string getNome(){
            return dificuldade;
        }
};