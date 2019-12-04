#include "fatura.h"

//CONSTRUTORES
Fatura::Fatura()
{
    set_serial("-");
    set_desc("-");
    set_quantia(0);
    set_preco(0);
}

Fatura::Fatura(string s, string dp, int q, float p)
{
    set_serial(s);
    set_desc(dp);
    set_quantia(q);
    set_preco(p);
}

//SETTERS
void Fatura::set_serial(string s)
{
    serial = s;
}

void Fatura::set_desc(string dp)
{
    desc_parcial = dp;
}

void Fatura::set_quantia(int q)
{
    if(q < 0) quantia = 0;
    else quantia = q;
}

void Fatura::set_preco(float p)
{
    if(p < 0) preco = 0;
    else preco = p;
}

//GETTERS
string Fatura::get_serial()
{
    return serial;
}

string Fatura::get_desc()
{
    return desc_parcial;
}

int Fatura::get_quantia()
{
    return quantia;
}

float Fatura::get_preco()
{
    return preco;
}

//FATURA TOTAL
float Fatura::quantiaXpreco(int q, float p)
{
    set_quantia(q);
    set_preco(p);

    return (float)p*q;
}

void Fatura::fatura_total()
{
    cout << "\n\n\nPRODUTO: " << get_serial() << endl;
    cout << "Descrito como: " << get_desc() << endl;
    cout << get_quantia() << " unidade(s)" << endl;
    cout << "\n\nTOTAL\t";
    cout << "R$" << fixed << setprecision(2) << quantiaXpreco(get_quantia(),get_preco());
    cout << endl << endl;
}