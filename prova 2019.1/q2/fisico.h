#ifndef FISICO_H
#define FISICO_H
#include "cliente.h"
#include <iostream>

using namespace std;

class Fisico : public Cliente
{
    private:
        string cpf;
        string rg;
        string data;
    public:
        void set_cpf(string c);
        void set_rg(string r);
        void set_data(string d);

        string get_cpf();
        string get_rg();
        string get_data();

        void cadastro_f();
};

#endif