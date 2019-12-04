#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <map>

using namespace std;

const string QUANTIDADE = "Quantidade";
const string PRECO = "Preço";

void mostrar_lista(map<string, map<string, float>> l);

void total_itens(map<string, map<string, float>> l);

float num_itens(map<string, map<string, float>> l);

float preco_acumulado(string item, float acumulador, pair<string, map<string, map<string, float>>> l);

void preco_medio(map<string, map<string, float>> l);

void precos(map<string, map<string, float>> l);