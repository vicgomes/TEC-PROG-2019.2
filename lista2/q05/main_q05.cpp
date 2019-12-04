#include "fatura.h"

int main()
{
    string s = "-";
    string dp = "-";
    int q = 0;
    float p = 0;
    
    cout << "Olá, insira o serial do produto: ";
    cin >> s;

    cout << "Agora, insira uma breve descrição do produto:\n";
    cin >> dp;

    cout << "Por fim, digite respectivamente a quantia e o preço do produto:\n";
    cin >> q;
    cin >> p;

    Fatura f(s, dp, q, p);
    f.fatura_total();
    
    return 0;
}