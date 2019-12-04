#ifndef DADOSENSOR_H
#define DADOSENSOR_H

#include <iostream>

using namespace std;

class DadosSensor
{
    private:
        int valor;
        int frequencia;
    public:
        DadosSensor();
        DadosSensor(int v, int f);

        int get_valor();
        int get_frequencia();

        void print_dados();
};

#endif