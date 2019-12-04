#include "conta.h"
#define S_MIN 0

//CONSTRUTORES
Conta::Conta()
{
    saldo = S_MIN;
}

Conta::Conta(float s)
{
    if(s >= S_MIN) saldo = s;
    else
    {
        cout << "Saldo inválido.\n";
        saldo = S_MIN;
    }
}

//GETTERS
float Conta::get_saldo()
{
    return saldo;
}

//OPERAÇÕES
void Conta::depositar()
{
    float dep;

    cout << "Insira o valor desejado a ser depositado:\n";
    cin >> dep;

    saldo += dep;
}

void Conta::sacar()
{
    float saque;

    cout << "Insira o valor desejado a ser sacado:\n";
    cin >> saque;

    if(saque > saldo) cout << "Seu saldo é insuficiente.\n";
    else saldo -= saque;
}

void Conta::mostrar_saldo()
{
    cout << "Seu saldo atual é de R$" << fixed << setprecision(2) << get_saldo() << endl;
}

void Conta::metodos()
{
    int m = 0;

    cout << "Escolha o método desejado:" << endl;
    cout << "0.Cancelar\t1.Depositar\n";
    cout << "2.Sacar   \t3.Mostrar saldo\n";

    cin >> m;

    while(m != 0)
    {
        switch(m)
        {
            case 1:
                depositar();
                break;
            case 2:
                sacar();
                break;
            case 3:
                mostrar_saldo();
                break;
            case 0:
            default:
                m = 0;
                break;
        }
        cout << "\nDeseja continuar?(0 para parar)\n";
        cin >> m;
    }
}

/////////
void Conta::intro()
{
    cout << "Olá, bem vindo ao LacouthBank!\n";
}

void Conta::adeus()
{
    cout << "Obrigado, volte sempre!\n";
}