#include <iostream>
#include <fstream>
#include "cliente.h"
#include "fisico.h"
#include "juridico.h"
#define NUM_CLIENTES 3

using namespace std;

int main()
{
    Fisico fulano;
    Juridico ciclano;

    ofstream arquivo_f; //para pessoa física
    ofstream arquivo_j; //para pessoa jurídica

    arquivo_f.open("pessoa_fisica.txt", ios::app);
    for(int i = 0;i < NUM_CLIENTES;i++)
    {
        fulano.cadastro_f();
        arquivo_f << "Código: " << fulano.get_code() << endl;
        arquivo_f << "Nome: " << fulano.get_nome() << endl;
        arquivo_f << "Telefone: " << fulano.get_tel() << endl;
        arquivo_f << "CEP: " << fulano.get_cep() << endl;
        arquivo_f << "CPF: " << fulano.get_cpf() << endl;
        arquivo_f << "RG: " << fulano.get_rg() << endl;
        arquivo_f << "Data de nascimento: " << fulano.get_data() << endl;
    }
    arquivo_f.close();

    arquivo_j.open("pessoa_juridica.txt", ios::app);
    for(int i = 0;i < NUM_CLIENTES;i++)
    {
        ciclano.cadastro_j();
        arquivo_j << "Código: " << ciclano.get_code() << endl;
        arquivo_j << "Nome: " << ciclano.get_nome() << endl;
        arquivo_j << "Telefone: " << ciclano.get_tel() << endl;
        arquivo_j << "CEP: " << ciclano.get_cep() << endl;
        arquivo_j << "CNPJ: " << ciclano.get_cnpj() << endl;
        arquivo_j << "Inscrição estadual: " << ciclano.get_insc() << endl;
        arquivo_j << "Nome fantasia: " << ciclano.get_nfant() << endl;
    }
    arquivo_j.close();
    return 0;
}