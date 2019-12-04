#ifndef ALUNO_H
#define ALUNO_H

#include <QString>

class Aluno
{
private:
    QString nome;
    QString matricula;
    double media;
    QString curso;

public:
    Aluno();

    QString getNome() const; //const = nada dentro do método pode ser alterado
    void setNome(const QString &value); // const = o valor de dentro não pode ser alterado

    QString getMatricula() const;
    void setMatricula(const QString &value);

    double getMedia() const;
    void setMedia(double value);

    QString getCurso() const;
    void setCurso(const QString &value);

    QString definir_status();
};

#endif // ALUNO_H
