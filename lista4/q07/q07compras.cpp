#include "q07compras.h"

void mostrar_lista(map<string, map<string, float>> l)
{
    for(auto elemento : l)
    {
        cout << endl << elemento.first << "{\n";
        cout << "\t" << "Quantidade: " << elemento.second[QUANTIDADE] << endl;
        cout << "\t" << "Preço: " << elemento.second[PRECO] << endl;
    }
}

void total_itens(map<string, map<string, float>> l)
{
    float total = 0;

    for(auto elemento : l)
    {
        total += elemento.second[QUANTIDADE];
    }
    cout << "Quantidade final de produtos: " << total << endl;
}

float num_itens(map<string, map<string, float>> l)
{
    float total = 0;

    for(auto elemento : l)
    {
        total += elemento.second[QUANTIDADE];
    }

    return total;
}

float preco_acumulado(string item, float acumulador, pair<string, map<string, map<string, float>>> l)
{
    return acumulador+=l.second[item][QUANTIDADE] * l.second[item][PRECO];
}

void preco_medio(map<string, map<string, float>> l)
{
    float preco_total;
    float preco_medio;

    preco_total = accumulate(l.begin(), l.end(), 0.0, preco_acumulado);
    preco_medio = preco_total / num_itens(l);

    cout << "A média de preços da feira é de: " << fixed << setprecision(2) << preco_medio << " reais.\n";
}

void precos(map<string, map<string, float>> l)
{
    auto resultado = minmax_element(l.begin(), l.end());
    cout << "Maior preço: " << *resultado.first;
    cout << "\nMenor preço: " << *resultado.second;
}