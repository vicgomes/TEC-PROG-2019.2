#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include "dadosensor.h"
#include "file.h"

using namespace std;

int main()
{
    vector<DadosSensor> vDados;
    vector<int> vetor;
    ofstream arquivo9;

    criar_arquivo();
    set_vetor(vetor);
    vetor_para_dados(vetor, vDados);

    arquivo9.open("questao_9.txt");

        arquivo9 << "Valor" << setw(13) << "Frequência" << endl;

        ordernar_classe(vDados);

        for(auto elemento : vDados)
        {
            arquivo9 << elemento.get_valor() << setw(9) << elemento.get_frequencia() << endl;
        }

    arquivo9.close();

    return 0;
}