#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include "dadosensor.h"

using namespace std;

void criar_arquivo();

void set_vetor(vector<int> &v);

void mostrar_vetor(vector<int> &v);

bool teste(int encontrar, int posicao, vector<int> v);

bool ordenar_freq(DadosSensor a, DadosSensor b);

void ordernar_classe(vector<DadosSensor> &vDados);

void vetor_para_dados(vector<int> v, vector<DadosSensor> &vDados);

void show(vector<DadosSensor> &vDados);