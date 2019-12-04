#include "cliente.h"
#define NOME_MIN 3
#define TEL_SIZE 9
#define CEP_SIZE 8

void Cliente::set_code(int c)
{
    if(c >= 0)
        codigo = c;
    else
        codigo = 0;
}

void Cliente::set_nome(string n)
{
    if(n.size() >= NOME_MIN)
        nome = n;
    else
        nome = "inválido";
}

void Cliente::set_tel(string t)
{    
    if(t.size() != TEL_SIZE)
        telefone = "inválido";
    else
        telefone = t;
}

void Cliente::set_cep(string c)
{
    if(c.size() != CEP_SIZE)
        cep = "inválido";
    else
        cep = c;
}

int Cliente::get_code()
{
    return codigo;
}

string Cliente::get_nome()
{
    return nome;
}

string Cliente::get_tel()
{
    return telefone;
}

string Cliente::get_cep()
{
    return cep;
}