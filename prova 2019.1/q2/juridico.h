#ifndef JURIDICO_H
#define JURIDICO_H
#include "cliente.h"
#include <iostream>

using namespace std;

class Juridico : public Cliente
{
    private:
        string cnpj;
        string insc_est;
        string nome_fant;
    public:
        void set_cnpj(string c);
        void set_insc(string i);
        void set_nfant(string nf);

        string get_cnpj();
        string get_insc();
        string get_nfant();

        void cadastro_j();
};

#endif