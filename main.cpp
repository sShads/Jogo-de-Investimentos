#include <iostream>
#include "CentralDeInvestimento.cpp"
#include "Jogo.cpp"
#include "Banco.cpp"
using namespace std;

int banco,n,dif=4;

void verificarbanco(){
    cout<<"Escolha o Banco para investir: ";
    cin>>banco;
    if(banco<0 || banco>5){
        cout<<"Nao existe essa opcao"<<endl;
        verificarbanco();
    }
}

void verificarrendimento(){
    cout<<"Escolha o rendimento: ";
    cin>>n;
    if(n<0 || n>5){
        cout<<"Nao existe essa opcao"<<endl;
        verificarrendimento();
    }
}

int main(){

    srand(time(NULL));

    //escolha da dificuldade do jogo
    cout<<"Começo do jogo"<<endl<<endl<<"Escolha a dificuldade"<<endl;
    cout<<"1-Facil"<<endl<<"2-Medio"<<endl<<"3-Dificil"<<endl<<"0-Sair"<<endl<<endl;
    do{
    cin>>dif;
    if(dif==0)
        return 0;
    }while(dif<1 || dif>3);

    

    //inicializacao do jogo
    //nome do banco - maximo de rentabilidade - risco de investimento
    Banco itau("Itau",70,6);
    Banco Santander("Santader",25,3);
    Banco Bradesco("Bradesco",10,1);

    Banco* bancos[5];
    bancos[0]=&itau;
    bancos[1]=&Santander;
    bancos[2]=&Bradesco;

    Jogo J;
    J.DefinirDificuldade(dif);
    cout<<endl<<"Dificuldade escolhida: "<<J.getNome()<<endl;

    //comeco do jogo
    do{
    cout<<endl<<endl<<"Rodada "<<J.getRodada()<<" - Dinheiro atual = "<<J.getDificuldade()<<endl<<endl;
    for(int i=0;i<3;i++){
        bancos[i]->atualizarbanco(i+1);
    }
    verificarbanco();
    verificarrendimento();
    if(n!=0){
        J.setDificuldade(bancos[banco-1]->investir(n-1,J.getDificuldade()));
    }
    if(J.getRodada()==10){
        break;
    }
    J.PassarRodada();
    }while(n!=0 || banco!=0);
    
    cout<<endl<<"Dinheiro Final: "<<J.getDificuldade()<<endl;
    return 0;
}