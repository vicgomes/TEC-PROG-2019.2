#include "turma.h"

Turma::Turma()
{

}

void Turma::inserir_aluno(Aluno a)
{
    turma.push_back(a);
}

double Turma::get_maior()
{
    Aluno *a = std::max_element(turma.begin(), turma.end(), comparar_media);
    return a->getMedia();
}

double Turma::get_menor()
{
    Aluno *a = std::min_element(turma.begin(), turma.end(), comparar_media);
    return a->getMedia();
}

double Turma::get_media()
{
    double media = 0;
    for(auto e : turma)
    {
        media += e.getMedia();
    }
    return media/turma.size();
}

bool comparar_media(Aluno a, Aluno b)
{
    return a.getMedia() < b.getMedia();
}
