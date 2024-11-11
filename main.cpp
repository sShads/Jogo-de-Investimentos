#include <iostream>
#include "CentralDeInvestimento.cpp"
#include "Dificuldade.cpp"
using namespace std;

int main(){

    int n,dif=4;

    //escolha da dificuldade do jogo
    cout<<"Começo do jogo"<<endl<<endl<<"Escolha a dificuldade"<<endl;
    cout<<"1-Facil"<<endl<<"2-Medio"<<endl<<"3-Dificil"<<endl<<"0-Sair"<<endl<<endl;
    do{
    cin>>dif;
    if(dif==0)
        return 0;
    }while(dif<1 || dif>3);

    //inicializacao do jogo
    CentralDeInvestimento itau("Itau",10000, 50000);
    CentralDeInvestimento santander("Santander",5000, 40000);
    CentralDeInvestimento bradesco("Bradesco",0, 25000);
    CentralDeInvestimento nubank("Nubank",0, 15000);
    CentralDeInvestimento t("Tiger",0, 50000);
    Dificuldade D;
    D.setDificuldade(dif);
    cout<<endl<<"Dificuldade escolhida: "<<D.getNome()<<endl;

    //comeco do jogo
    do{
    cout<<"Dinheiro atual = "<<D.getDificuldade()<<endl;


    cin>>n;
    itau.getNomedoBanco();
    }while(n!=0);
    itau.getNomedoBanco();
    return 0;
}