#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream arquivo;
    vector<string> txt;
    vector<string>::iterator it;
    string busca;
    string line;
    int frequencia;

    cout << "Insira o valor que deseja encontrar: ";
    cin >> busca;    

    arquivo.open("questao_9.txt");

        while(arquivo >> line)
        {
            txt.push_back(line);
        }

        it = find(txt.begin(), txt.end(), busca);
        frequencia = count(txt.begin(), txt.end(), busca);

        if(it != txt.end())
            cout << *it << " apareceu " << frequencia << " vezes.\n";
        else 
            cout << *it << " não existe no arquivo.\n";

    arquivo.close();

    return 0;
}