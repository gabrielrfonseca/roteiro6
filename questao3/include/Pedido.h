#ifndef PEDIDO_H
#define PEDIDO_H
#include <stdio.h>
#include <string>

using namespace std;

class Pedido
{
    public:

        int numero, quantidade;
        float preco;
        string descricao;

        Pedido(int numero, int quantidade, float preco, string descricao);
        virtual ~Pedido();
        void toString();

};

#endif // PEDIDO_H
