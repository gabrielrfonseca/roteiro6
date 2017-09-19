#include <iostream>
#include "televisao.h"

using namespace std;

int main()
{
    Televisao tv;

    tv.setCanal(1);
    tv.setSom(5);

    cout << "Canal: " << tv.getCanal() << endl;
    cout << "Volume: " << tv.getSom() << endl;

    tv.aumentaCanal();
    tv.aumentaSom();

    cout << "Canal: " << tv.getCanal() << endl;
    cout << "Volume: " << tv.getSom() << endl;

    tv.diminuiCanal();
    tv.diminuiSom();

    cout << "Canal: " << tv.getCanal() << endl;
    cout << "Volume: " << tv.getSom() << endl;

    return 0;
}
