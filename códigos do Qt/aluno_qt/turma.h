#ifndef TURMA_H
#define TURMA_H

#include <QVector>
#include <algorithm>
#include "aluno.h"

class Turma
{
private:
    QVector<Aluno> turma;
public:
    Turma();

    void inserir_aluno(Aluno a);

    double get_maior();
    double get_menor();
    double get_media();
};

bool comparar_media(Aluno a, Aluno b);

#endif // TURMA_H
