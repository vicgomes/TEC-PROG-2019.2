#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include <iomanip>

using namespace std;

class Conta{
    protected:
        float saldo;
    public:
        Conta();
        Conta(float s);

        float get_saldo();

        void metodos();

        void depositar();
        void sacar();
        void mostrar_saldo();
};

void intro();
void adeus();

#endif