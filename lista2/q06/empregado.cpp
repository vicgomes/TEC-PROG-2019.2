#include "empregado.h"
#define MIN 0
#define ANO 12
#define ANO_AUMENTO 0.12  //12 x 10%

//CONSTRUTORES
Empregado::Empregado()
{
    set_nome("-");
    set_sobrenome("-");
    set_salario(0.00);
}

Empregado::Empregado(string n, string sn, float s)
{
    set_nome(n);
    set_sobrenome(sn);
    set_salario(s);
}

//SETTERS
void Empregado::set_nome(string n)
{
    nome = n;
}

void Empregado::set_sobrenome(string sn)
{
    sobrenome = sn;
}

void Empregado::set_salario(float s)
{
    if(s >= MIN) salario = s;
    else salario = 0;
}

//GETTERS
string Empregado::get_nome()
{
    return nome;
}

string Empregado::get_sobrenome()
{
    return sobrenome;
}

float Empregado::get_salario()
{
    return salario;
}

//SALARIO
void Empregado::mostrar_empregado()
{
    bool aumento = false;

    cout << endl;
    cout << "Funcionário(a): " << get_nome() << get_sobrenome();
    cout << endl;

    cout << "Salário anual: R$";
    cout << fixed << setprecision(2) << ANO*get_salario();
    cout << endl;
    
    cout << "Deseja dar um aumento de 10% para a pessoa empregada?\n0.Não\t1.Sim\n";
    cin >> aumento;

    if(aumento == true)
    {
        cout << "\nO novo salário anual será de: R$";
        cout << ANO_AUMENTO*get_salario() << endl << endl;
    }
    else
        cout << "\nCerto, obrigado.\n";
}