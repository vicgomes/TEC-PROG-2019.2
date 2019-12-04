#include "cliente.h"
#include "fisico.h"
#define CPF_SIZE 11
#define RG_SIZE 7
#define DATA_SIZE 8


void Fisico::set_cpf(string c)
{
    if(c.size() != CPF_SIZE)
        cpf = "inválido";
    else 
        cpf = c;
}

void Fisico::set_rg(string r)
{
    if(r.size() != RG_SIZE)
        rg = "inválido";
    else 
        rg = r;
}

void Fisico::set_data(string d)
{
    if(d.size() != DATA_SIZE)
        data = "inválido";
    else 
        data = d;
}

string Fisico::get_cpf()
{
    return cpf;
}

string Fisico::get_rg()
{
    return rg;
}

string Fisico::get_data()
{
    return data;
}

void Fisico::cadastro_f()
{
    int code_temp;
    string nome_temp, tel_temp, cep_temp;
    string cpf_temp, rg_temp, data_temp;

    cout << "Digite o código: ";
    cin >> code_temp;
    set_code(code_temp);

    cout << "Nome: ";
    cin >> nome_temp;
    set_nome(nome_temp);

    cout << "Telefone: ";
    cin >> tel_temp;
    set_tel(tel_temp);

    cout << "CEP: ";
    cin >> cep_temp;
    set_cep(cep_temp);

    cout << "CPF: ";
    cin >> cpf_temp;
    set_cpf(cpf_temp);

    cout << "RG: ";
    cin >> rg_temp;
    set_rg(rg_temp);

    cout << "Data de nascimento: ";
    cin >> data_temp;
    set_data(data_temp);
}