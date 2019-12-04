#include <iostream>
#include "conta.h"

int main()
{
    float x;
    float y;

    intro();
    cout << "Digite o saldo bancário da conta A, em reais.\n";
    cin >> x;
    cout << "Agora, o da conta B.\n";
    cin >> y;

    Conta a(x);
    cout << "\nCONTA A:\n";
    a.metodos();

    Conta b(y);
    cout << "\nCONTA B:\n";
    b.metodos();
    adeus();

    return 0;
}