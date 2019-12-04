#include <iostream>
#include <map>

using namespace std;

int main()
{
    string nome;
    map<string, string> lista;

    do
    {
        cout << "Digite um nome (ou 'sair' para imprimir uma lista e sair): ";
        getline(cin, nome);
        cout << "Agora um telefone: ";
        cin >> lista[nome];

        for(auto n : lista)
        {
            if(lista.find(nome) != lista.end())
                cout << n.first << endl << "Telefone: " << n.second << endl;     
        }
    }while(nome != "sair");

    return 0;
}