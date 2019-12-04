#include <iostream>
#include <vector>
#include <algorithm> //sort e count
#include "file.h"

using namespace std;

int main()
{
    vector<int> vetor;

    criar_arquivo();
    set_vetor(vetor);

    for(int i = 0;i < vetor.size();i++)
    {
        if(teste(vetor[i], i, vetor))
        {
            cout << vetor[i] << " aparece " << count(vetor.begin(), vetor.end(), vetor[i]) << " vezes.\n";
        }
    }
    
    return 0;
}