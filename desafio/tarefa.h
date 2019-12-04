#ifndef TAREFA_H
#define TAREFA_H

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

const string ALTA = "alta";
const string MEDIA = "media";
const string BAIXA = "baixa";

const string FINALIZADO = "Finalizado";
const string INCOMPLETO = "Incompleto";

class Tarefa
{
    private:
        string descricao;
        string prioridade;
        bool status;
    public:
        bool set_desc(string d);
        bool set_priori(string p);
        void set_status(bool b);

        string get_desc();
        string get_priori();
        string get_status();

        void obter_tarefa();
        void mostrar_tarefa();
};

#endif 