#include "fruta.h"


//COSNTRUTORES
Fruta::Fruta()
{
    set_nome("-");
    set_cor("-");
}

Fruta::Fruta(string n, string c)
{
    set_nome(n);
    set_cor(c);
}

//SETTERS E GETTERS
void Fruta::set_nome(string n)
{
    nome = n;
}

void Fruta::set_cor(string c)
{
    cor = c;
}

string Fruta::get_nome()
{
    return nome;
}

string Fruta::get_cor()
{
    return cor;
}