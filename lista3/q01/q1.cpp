#include <iostream>
#include <vector>
//variável auto

using namespace std;

int main()
{
    int valor;
    vector<int> vetor;

    cout << "Insira os valores desejados para guardar no vetor.\n";
    while(cin >> valor)
    {
        vetor.push_back(valor); 
    }

    for(auto elemento : vetor)
    {
       cout << elemento << " ";
    }
    cout << endl;
    return 0;
}
