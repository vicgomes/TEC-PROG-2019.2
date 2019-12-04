#ifndef CORRENTE_H
#define CORRENTE_H
#include <iostream>
#include <iomanip>
#include "conta.h"

using namespace std;

class ContaCorrente : public Conta
{
    protected:
        float limite;
        float total;
    public:
        ContaCorrente();
        ContaCorrente(float l, float s) : Conta(s)
        {
            set_limite(l);
        }

        void set_limite(float l);

        float get_limite();
        float get_saldolimite();

        void saldo_total();
};

#endif