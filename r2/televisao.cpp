#include "televisao.h"
#include <stdlib.h>

using namespace std;

void Televisao::setCanal(int canal){
    this->canal=canal;
}
int Televisao::getCanal(){
    return canal;
}

void Televisao::aumentaCanal(){
    canal+=1;
}
void Televisao::diminuiCanal(){
    canal-=1;

}


void Televisao::setSom(int som){
    this->som=som;
}
int Televisao::getSom(){
    return som;
}

void Televisao::aumentaSom(){
    som+=1;

}
void Televisao::diminuiSom(){
    som-=1;

}

