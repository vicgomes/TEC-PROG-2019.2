#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <iomanip>

using namespace std;

class Empregado
{
    private:
        string nome;
        string sobrenome;
        float salario;
    public:
        Empregado();
        Empregado(string n, string sn, float s);

        void set_nome(string n);
        void set_sobrenome(string sn);
        void set_salario(float s);

        string get_nome();
        string get_sobrenome();
        float get_salario();

        void mostrar_empregado();
};

#endif