#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> nome;
    vector<string> sobrenome;
    string n;
    string sn;
    int x = 0;

    do
    {
        cout << "Insira o nome: ";
        getline(cin, n);
        nome.push_back(n);

        cout << "Agora, o sobrenome: ";
        getline(cin, sn);
        sobrenome.push_back(sn);

        cout << "[-1 para cancelar]\n";
        cin >> x;
    }while(x != -1);
    
    for(int i = 0;i )

    return 0;
}