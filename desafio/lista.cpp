#include "lista.h"

void Lista::add_tarefa(Tarefa t)
{
    lista.push_back(t);
}

void Lista::rm_tarefa(string d)
{
    for(int i = 0;i < size();i++)
    {
        if(lista[i].get_desc() == d)
        {
            lista.erase(lista.begin()+i);
            break;
        }
        else
            cout << "Tarefa inexistente.\n";
    }
}

void Lista::mudar_status(string d)
{
    for(int i = 0;i < size();i++)
    {
        if(lista[i].get_desc() == d)
        {
            if(lista[i].get_status() == FINALIZADO)
                lista[i].set_status(false);
            else
                lista[i].set_status(true);
        }
    }
}

int Lista::size()
{
    return lista.size();
}

void Lista::mostrarTarefas()
{
    for(auto elemento : lista)
        elemento.mostrar_tarefa();
}

void Lista::mostrarTarefasPorDesc()
{
    sort(lista.begin(), lista.end(), comparar_desc);

    for(auto elemento : lista)
        elemento.mostrar_tarefa();
}

bool comparar_desc(Tarefa a, Tarefa b)
{
    return a.get_desc() < b.get_desc();
}

void menu()
{
    cout << "Informe a sua opção: ";
            cout << "1 - Adicionar tarefa\n \
                    2 - Mostrar tarefas\n \
                    3 - Mostrar tarefas por descrição\n \
                    4 - Mostrar tarefas por prioridade\n \
                    5 - Mostrar tarefas por status\n \
                    6 - Alterar status da tarefa\n \
                    7 - Remover tarefa\n \
                    8 - Sair\n";
}