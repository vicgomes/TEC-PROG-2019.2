#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <algorithm>
#include <vector>
#include "tarefa.h"

using namespace std;

class Lista
{
    private:
        vector<Tarefa> lista;
    public:
        void add_tarefa(Tarefa t);
        void rm_tarefa(string d);
        void mudar_status(string d);
        void mostrarTarefas();
        int size();

        void mostrarTarefasPorDesc();
        void mostrarTarefasPorPriori();
        void mostrarTarefasPorStatus();
};

bool comparar_desc(Tarefa a, Tarefa b);
void menu();

#endif