#include <iostream>
#include <stdio.h>
#include "relogio.h"

using namespace std;

int main()
{
    relogio rel;

    rel.setHora(5);
    rel.setMinutos(59);
    rel.setSegundos(59);

    cout << "Sao: " << rel.getHora() << ": " << rel.getMinutos() << ": " << rel.getSegundos() << endl;

    rel.avancarHorario();

    cout << "Sao: " << rel.getHora() << ": " << rel.getMinutos() << ": " << rel.getSegundos() << endl;

}
