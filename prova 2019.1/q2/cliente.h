#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>

using namespace std;

class Cliente
{
    protected:
        int codigo;
        string nome;
        string telefone;
        string cep;
    public:
        void set_code(int c);
        void set_nome(string n);
        void set_tel(string t);
        void set_cep(string c);

        int get_code();
        string get_nome();
        string get_tel();
        string get_cep();
};

#endif