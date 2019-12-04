#include "empregado.h"

int main()
{
    string n1 = "-";
    string sn1 = "-";
    float s1 = 0;
    string n2 = "-";
    string sn2 = "-";
    float s2 = 0;
    

    cout << "\n\n\nCADASTRO\n\nEmpregado(a) UM:\n";
    cout << "Insira o primeiro nome, e logo após, o sobrenome:\n";
    cin >> n1;
    cin >> sn1;

    cout << "Agora, o salário de " << n1 << endl;
    cin >> s1;

    Empregado e1(n1, sn1, s1);
    e1.mostrar_empregado();

    cout << "\n\nEmpregado(a) DOIS:\n";
    cout << "Insira o primeiro nome, e logo após, o sobrenome:\n";
    cin >> n2;
    cin >> sn2;

    cout << "Agora, o salário de " << n2 << endl;
    cin >> s2;

    Empregado e2(n2, sn2, s2);
    e2.mostrar_empregado();

    return 0;
}