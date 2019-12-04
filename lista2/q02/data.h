#ifndef DATA_H
#define DATA_H
#include <iostream>

using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;
    
    public:
        void set_dia(int d);
        int get_dia();

        void set_mes(int m);
        int get_mes();

        void set_ano(int a);
        int get_ano();

        void obter_dados();
        void mostrar_dados();
};

#endif
