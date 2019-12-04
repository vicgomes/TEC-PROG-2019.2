#include <iostream>
#include <map>

using namespace std;

int main()
{   
    int n;
    map<int, int> lista;

    cout << "Informe o valor de n: ";
    cin >> n;

    for(int i = 0;i <= n;i++)
    {
        lista[i] = i * i;
    }

    for(auto elemento : lista)
    {
        cout << elemento.first << " : " << elemento.second << endl;
    }

    return 0;
}