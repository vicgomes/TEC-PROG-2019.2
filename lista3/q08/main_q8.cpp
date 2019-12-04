#include <iostream>
#include "dadosensor.h"
#include "file.h"

using namespace std;

int main()
{
    vector<DadosSensor> vDados;
    vector<int> vetor;

    criar_arquivo();
    set_vetor(vetor);
    vetor_para_dados(vetor, vDados);

    stable_sort(vDados.begin(), vDados.end(), ordenar_freq);

    show(vDados);

    return 0;
}