#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED

class relogio{
      private:
            int hora, minutos, segundos;
      public:
            void setHora(int hora);
            int getHora();
            void setMinutos(int minutos);
            int getMinutos();
            void setSegundos(int segundos);
            int getSegundos();
            void avancarHorario();
};

#endif // RELOGIO_H_INCLUDED
