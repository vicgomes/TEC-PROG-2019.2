#include <iostream>
#include "tarefa.h"
#include "lista.h"

using namespace std;

int main()
{
    int op = 0;
    Tarefa tarefa;
    Lista lista;

    tarefa.obter_tarefa();
    
    do{
        menu();
        cin >> op;

        switch(op)
        {
            case 1:
                lista.add_tarefa(tarefa);
                break;
            case 2:
                lista.mostrarTarefas();
                break;
            case 3:
                lista.mostrarTarefasPorDesc();
                break;
            case 4:
                lista.mostrarTarefasPorPriori();
                break;
            case 5:
                lista.mostrarTarefasPorStatus();
                break;
            case 6:
                lista.mudar_status();
                break;
            case 7:
                lista.rm_tarefa();
                break;
            case 8:
            default:
                break;
        }
    }while(op != 8);

    return 0;
}