#include <iostream>
#include <algorithm>
#include <map>
#include "q07compras.h"

using namespace std;

const string QUANTIDADE = "Quantidade";
const string PRECO = "Preço";

int main()
{
    map<string, map<string, float>> lista;
    string item;

    do 
    {
        cout << "Insira o nome do produto('sair' para encerrar): ";
        getline(cin, item);
        
        if(item == "sair") break;

        cout << "Agora, insira a quantidade desejada: ";
        cin >> lista[item][QUANTIDADE];

        cout << "Por fim, o preço de cada produto(em reais): ";
        cin >> lista[item][PRECO];
    }while(true);

    mostrar_lista(lista);
    total_itens(lista);
    preco_medio(lista);
    precos(lista);

    return 0;
}