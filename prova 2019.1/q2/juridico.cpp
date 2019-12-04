#include "cliente.h"
#include "juridico.h"

void Juridico::set_cnpj(string c)
{
    cnpj = c;
}

void Juridico::set_insc(string i)
{
    insc_est = i;
}

void Juridico::set_nfant(string nf)
{
    nome_fant = nf;
}

string Juridico::get_cnpj()
{
    return cnpj;
}

string Juridico::get_insc()
{
    return insc_est;
}

string Juridico::get_nfant()
{
    return nome_fant;
}

void Juridico::cadastro_j()
{
    int code_temp;
    string nome_temp, tel_temp, cep_temp;
    string cnpj_temp, insc_temp, nfant_temp;

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

    cout << "CNPJ: ";
    cin >> cnpj_temp;
    set_cnpj(cnpj_temp);

    cout << "Inscrição estadual: ";
    cin >> insc_temp;
    set_insc(insc_temp);

    cout << "Nome fantasia: ";
    cin >> nfant_temp;
    set_nfant(nfant_temp);
}