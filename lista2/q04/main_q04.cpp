#include <iostream>
#include "contaCorrente.h"

int main(){
    float s = 0;
    float lim = 0;

    intro();
    cout << "Insira o saldo bancário, em reais.\n";
    cin >> s;
    cout << "Agora, insira o limite monetário, novamente em reais.\n";
    cin >> lim;

    ContaCorrente a(lim,s);
    a.metodos();
    a.saldo_total();
    adeus();
    
    return 0;
}