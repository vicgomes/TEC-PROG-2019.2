#include "lista.h"
#include "tarefa.h"

void Lista::adicionarTarefa(Tarefa t)
{
    t.obterTarefa();
    lista.push_back(t);
}


void Lista::removerTarefa(string d)
{
    for(int i = 0;i < size();i++)
    {
        if(lista[i].getDescricao() == d)
            lista.erase(lista.begin()+i);
        else
        {
            cout << "Tarefa não encontrada.\n";
        }
    }
}

void Lista::mudarStatus(string d)
{
    if(getStatus() == "completa")
        setStatus(false);
    if(getStatus() == "incompleta")
        setStatus(true);
}

int Lista::size()
{
    return lista.size();
}

void Lista::mostrarTarefas();
{
    cout >> "Tabela de atividades:\n";
    cout >> getDescricao();
}

 
        void Lista::mostrarTarefasPorDescricao();
        void Lista::mostrarTarefasPorPrioridade();
        void Lista::mostrarTarefasPorStatus();