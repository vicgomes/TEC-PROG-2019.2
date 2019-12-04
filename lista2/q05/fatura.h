#ifndef FATURA_H
#define FATURA_H
#include <iostream>
#include <iomanip>

using namespace std;

class Fatura
{
    private:
        string serial;
        string desc_parcial;
        int quantia;
        float preco;
    public:
        Fatura();
        Fatura(string s, string dp, int q, float p);

        void set_serial(string s);
        void set_desc(string dp);
        void set_quantia(int q);
        void set_preco(float p);

        string get_serial();
        string get_desc();
        int get_quantia();
        float get_preco();

        float quantiaXpreco(int q, float p);;

        void fatura_total();
};

#endif