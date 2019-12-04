#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <vector>

using namespace std;

class Aluno{
    private:
        string nome;
        string matricula;
        vector<float> medias;
        float CRE;
        vector<string> disciplinas;


    public:
        void pegar_dados();
        void mostrar_dados();

        void set_nome(string alguem);
        string get_nome();

        void set_matricula(string mat);
        string get_matricula();

        void set_medias();
        float get_medias();

        void set_CRE();
        float get_CRE();

        void set_disciplinas();
        void get_disciplinas();
};

#endif
