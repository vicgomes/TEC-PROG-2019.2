#include "tarefa.h"

#define DESC_MIN 3

bool Tarefa::set_desc(string d)
{
    if(d.size() >= DESC_MIN)
    {
        descricao = d;
        return true;
    }
    else return false;
}

bool Tarefa::set_priori(string p)
{
    transform(p.begin(), p.end(), p.begin(), ::tolower);

    if(p == ALTA || p == MEDIA || p == BAIXA)
    {
        prioridade = p;
        return true;
    }
    else return false;
}

void Tarefa::set_status(bool b)
{
    status = b;
}

string Tarefa::get_desc()
{
    return descricao;
}

string Tarefa::get_priori()
{
    return prioridade;
}

string Tarefa::get_status()
{
    return status ? FINALIZADO : INCOMPLETO;
}

void Tarefa::obter_tarefa()
{
    string temp;

    do
    {
        cout << "Informe a descrição: ";
        getline(cin, temp);
        set_desc(temp);
    }while(!set_desc(temp) and cout<<"Descrição inválida.\n"); // ! = NOT

    do
    {
        cout << "Informe a prioridade(alta, media, baixa): ";
        getline(cin, temp);
        set_priori(temp);
    }while(!set_priori(temp) and cout<<"Descrição inválida.\n");

    set_status(0);
}

void Tarefa::mostrar_tarefa()
{
    cout << setw(20) << get_desc();
    cout << setw(20) << get_priori();
    cout << setw(20) << get_status() << endl;
}