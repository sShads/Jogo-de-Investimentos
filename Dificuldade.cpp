#pragma once
#include <iostream>
using namespace std;

class Dificuldade{
    private:

        string nome;
        int dificuldade;
    
    public:
        
        void setDificuldade(int dif){
            if(dif==1){
                nome="Facil";
                this->dificuldade=20000;
            }
            if(dif==2){
                nome="Medio";
                this->dificuldade=10000;
            }
            if(dif==3){
                nome="Dificil";
                this->dificuldade=5000;
            }
        }

        int getDificuldade(){
            return dificuldade;
        }

        string getNome(){
            return nome;
        }
};