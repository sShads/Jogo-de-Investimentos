#include <iostream>
#include "CentralDeInvestimento.cpp"
#include "Jogo.cpp"
#include "Banco.cpp"
using namespace std;

int banco,n,dif=4,rod;

void verificarbanco(){
    cout<<"Escolha o Banco para investir: ";
    cin>>banco;
    if(banco<0 || banco>4){
        cout<<"Nao existe essa opcao"<<endl;
        verificarbanco();
    }
}

void verificarrendimento(){
    cout<<"Escolha o rendimento: ";
    cin>>n;
    if(n<0 || n>3){
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


    Jogo J;
    J.DefinirDificuldade(dif);
    rod=J.getRodada();
    cout<<endl<<"Dificuldade escolhida: "<<J.getNome()<<endl;

    cout<<"Invista nos bancos disponiveis para ganhar dinheiro"<<endl;
    cout<<"Escolha o numero da opcao banco e depois o tipo de rendimento"<<endl;
    cout<<"1 - Baixo"<<endl<<"2 - Medio"<<endl<<"3 - Alto"<<endl;
    cout<<"Seu objetivo é chegar a 100000"<<endl<<"Boa Sorte!"<<endl;
    cout<<endl<<"Digite qualquer coisa para continuar"<<endl;
    string confirmacao;
    cin>>confirmacao;

    //inicializacao do jogo
    //nome do banco - maximo de rentabilidade - risco de investimento
    Banco itau("Itau",19,9);//112-142-203
    Banco Santander("Santader",14,5);//109-131-176
    Banco Bradesco("Bradesco",7,2);//105-116-139
    Banco Nubank("Nubank",4,1);//103-109-122

    Banco* bancos[4];
    bancos[0]=&itau;
    bancos[1]=&Santander;
    bancos[2]=&Bradesco;
    bancos[3]=&Nubank;

    //comeco do jogo
    for(int j=0;j<rod;j++){
        cout<<endl<<"=================================="<<endl;
        cout<<"Rodadas Restantes "<<J.getRodada()<<" - Dinheiro atual = "<<J.getDificuldade()<<endl;
        cout<<"=================================="<<endl<<endl;

        cout<<endl<<"Mostrando os rendimentos maximos e minimos de cada banco"<<endl<<endl;
        for(int i=0;i<4;i++){
            bancos[i]->tabeladerendimentos(i);
        }

        verificarbanco();
        verificarrendimento();

        for(int i=0;i<4;i++){
            bancos[i]->atualizarbanco(i+1);
        }

        if(n==0 || banco==0)
            break;
        J.setDificuldade(bancos[banco-1]->investir(n-1,J.getDificuldade()));
        J.PassarRodada();

        cout<<endl<<"Digite qualquer coisa para continuar"<<endl;
        cin>>confirmacao;
    }
    
    J.fimdejogo();

    return 0;
}