#include <iostream>
#include <vector>
#include <algorithm>
#include "tarefa.h"
#include "lista.h"

using namespace std;


int main()
{
    int op = 0;
    Tarefa tarefa;
    Lista lista;

    tarefa.obterTarefa();
    
    do{
        menu();
        cin >> op;

        switch(op)
        {
            case 1:
                lista.adicionarTarefa(tarefa);
                break;
            case 2:
                lista.mostrarTarefas();
                break;
            case 3:
                lista.mostrarTarefasPorDescricao();
                break;
            case 4:
                lista.mostrarTarefasPorPrioridade();
                break;
            case 5:
                lista.mostrarTarefasPorStatus();
                break;
            case 6:
                lista.mudarStatus();
                break;
            case 7:
                lista.removerTarefa();
                break;
            case 8:
            default:
                break;
        }
    }while(op != 8);

    return 0;
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

