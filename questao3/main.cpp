#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    int opcao;
    RestauranteCaseiro res = RestauranteCaseiro();
    cout << "ASSISTENTE --- RESTAURANTE" << endl << endl;

    do{
        cout << "######MENU######" << endl << endl;
        cout << "Para sair - (0)" << endl;
        cout << "Para adicionar um pedido - (1)" << endl;
        cout << "Para calcular o total apurado - (2)" << endl;
        cout << "Informe a opcao: ";
        cin >> opcao;
        cout << "\n";

        switch(opcao){
            case 0:
                cout << "Finalizando" << endl;
                return 0;
            case 1:
                res.adicionaAoPedido();
                break;
            case 2:
                res.calculaTotalRestaurante();
                break;
            default :
                cout << "Opcao invalida" << endl << endl;
        }
    }while(1);

    return 0;
}
