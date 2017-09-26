#include "Pedido.h"

Pedido::Pedido(int numero, int quantidade, float preco, std::string descricao)
{
    this->numero=numero;
    this->quantidade=quantidade;
    this->preco=preco;
    this->descricao=descricao;
}

Pedido::~Pedido()
{
    //dtor
}
