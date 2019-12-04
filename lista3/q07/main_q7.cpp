#include <iostream>
#include <vector>
#include <algorithm>
#include "sensor.h"
#include "file.h"

using namespace std;

int main()
{
    vector<int> vetor;
    vector<DadosSensor> vDados;

    criar_arquivo();
    set_vetor(vetor);

    for(int i = 0;i < vetor.size();i++)
    {
        if(teste(vetor[i], i, vetor))
        {
            vDados.push_back(DadosSensor(vetor[i], count(vetor.begin(), vetor.end(), vetor[i])));
        }
    }

    for(auto elemento : vDados)
        elemento.print_dados();

    return 0;
}