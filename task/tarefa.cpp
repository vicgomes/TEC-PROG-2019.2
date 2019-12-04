#include "tarefa.h"

#define D_MIN 4


//SETTERS
bool Tarefa::setDescricao(string d)
{
    if(d.size() > D_MIN)
    {
        descricao = d;
        return true;
    }else
    {
        cout << "descrição inválida";
        return false;
    }
}

bool Tarefa::setPrioridade(string p)
{
    if(p == "alta")
    {
        prioridade = p;
        return true;
    }
    if(p == "media")
    {
        prioridade = p;
        return true;
    }
    if(p == "baixa")
    {
        prioridade = p;
        return true;
    }
    else return false;
}

void Tarefa::setStatus(bool b)
{
    status = b;
}

//GETTERS

string Tarefa::getDescricao()
{
    return descricao;
}

string Tarefa::getPrioridade()
{
    return prioridade;
}

string Tarefa::getStatus()
{
    if(status == true)
        return "completa";
    else
        return "incompleta";

}

void obterTarefa()
{
    string dtemp;
    string ptemp;
    bool btemp;

    cout << "Informe descrição da tarefa: (4 caracteres ou mais) \n";
    cin.ignore;
    getline(cin, dtemp);
    setDescricao(dtemp);
    
    cout << "Informe a prioridade da tarefa:\n\talta, media ou baixa) \n";
    cin >> ptemp;
    setPrioridade(ptemp);
    
    cout << "Informe o status da tarefa:\n1-Completa\t0-Incompleta";
    cin >> btemp;
    setStatus(btemp);
}
