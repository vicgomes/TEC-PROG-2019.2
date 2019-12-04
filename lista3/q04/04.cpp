#include <iostream>
#include <vector>
#include <algorithm> //sort
#include <fstream> //arquivo

#define NUM_VALORES 500
#define LIM_NUM 1000

using namespace std;

int main()
{
    ofstream arquivo;
    vector<int> vetor;

    arquivo.open("valores.txt");
        int random;

        srand(time(NULL));
        for(int i = 0;i < NUM_VALORES;i++)
        {
            random = rand()%LIM_NUM;//para limitar o número
            arquivo << random << endl;
            vetor.push_back(random);
        }
    arquivo.close();

    sort(vetor.begin(), vetor.end());

    for(int valor : vetor)
    {
        cout << valor;
    }cout << endl;

    cout << "Menor valor: " << vetor[0] << endl;
    cout << "Maior valor: " << vetor[NUM_VALORES - 1] << endl;
    
    return 0;
}