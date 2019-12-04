#include "contaCorrente.h"
#define LIM_MIN 0

//CONSTRUTORES
ContaCorrente::ContaCorrente()
{
    limite = LIM_MIN;
}

//SETTERS
void ContaCorrente::set_limite(float l)
{
    if(l >= LIM_MIN) limite = l;
    else
    {
        cout << "Limite inválido.\n";
        limite = LIM_MIN;
    }
    total = get_saldo() + get_limite();
}

//GETTERS
float ContaCorrente::get_limite()
{
    return limite;
}

//TOTAL
void ContaCorrente::saldo_total()
{
    cout << "O saldo total é de R$" << fixed << setprecision(2) << total << endl;
}