#ifndef TELEVISAO_H_INCLUDED
#define TELEVISAO_H_INCLUDED

class Televisao{

private:
    int canal;
    int som;

public:
    void setCanal(int canal);
    int getCanal();
    void setSom(int som);
    int getSom();
    void aumentaCanal();
    void diminuiCanal();
    void aumentaSom();
    void diminuiSom();
};

#endif // TELEVISAO_H_INCLUDED
