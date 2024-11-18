#pragma once
#include <iostream>
using namespace std;

class Jogo{
    private:

        string dificuldade;
        int dinheiro=10000,rodada;
    
    public:
        
        void DefinirDificuldade(int dif){
            if(dif==1){
                dificuldade="Facil";
                this->rodada=20;
            }
            if(dif==2){
                dificuldade="Medio";
                this->rodada=15;
            }
            if(dif==3){
                dificuldade="Dificil";
                this->rodada=10;
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
            this->rodada=rodada-1;
        }

        string getNome(){
            return dificuldade;
        }

        void fimdejogo(){
            cout<<endl<<"Dinheiro Final: "<<dinheiro<<endl;
            if(dinheiro>=100000)
                cout<<"Você ganhou!"<<endl;
            else
                cout<<"Você perdeu :("<<endl;
        }
};