#include "RestauranteCaseiro.h"
#define SIZE 10

using namespace std;

RestauranteCaseiro::RestauranteCaseiro()
{
    int i;

    for(i=0; i<SIZE; i++){
        mesas[i]= new MesaDeRestaurante();
    }
}
void RestauranteCaseiro::adicionaAoPedido(){

    int mesa, numero, quantidade;
    float preco;
    string descricao;

    cout<<"Informe o numero: ";
    cin>>numero;
    cout<<"Informe a quantidade: ";
    cin>>quantidade;
    cout<<"Informe o preco: ";
    cin>>preco;
    cout<<"Informe a descricao: ";
    cin>>descricao;
    cout<<"Informe a mesa: ";
    cin>>mesa;

    mesas[mesa]->adicionaAoPedido(numero, quantidade, preco, descricao);
}
void RestauranteCaseiro::calculaTotalRestaurante(){
    int i;
    float total=0;

    for(i=0; i<SIZE; i++){
        cout << "Mesa#" << i+1;
        total += mesas[i]->calculaTotal();
    }

    cout << "Total apurado = "<< total << endl << endl;
}
RestauranteCaseiro::~RestauranteCaseiro()
{
    int i;

    for(i=0; i<SIZE; i++){
        delete mesas[i];
    }
}
