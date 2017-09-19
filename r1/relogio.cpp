#include "relogio.h"

void relogio::setHora(int hora){
    this->hora=hora;
}
int relogio::getHora(){
   return hora;
}

void relogio::setMinutos(int minutos){
    this->minutos=minutos;
}
int relogio::getMinutos(){
    return minutos;
}

void relogio::setSegundos(int segundos){
    this->segundos=segundos;
}
int relogio::getSegundos(){
    return segundos;
}

void relogio::avancarHorario(){
     segundos+=1;
     if(segundos>=60){
            segundos-=60;
            minutos+=1;
     }if(minutos>=60){
            minutos-=60;
            hora+=1;
     }if(hora>=24){
            hora-=24;
     }
}

