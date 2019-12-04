#include <iostream>
#include <fstream>

#define LINHAS 11 //pois ainda há a linha de cabeçalho

using namespace std;

int main()
{
    ifstream arquivo10;
    string line;

    arquivo10.open("questao_9.txt");

    for(int i = 0;i < LINHAS;i++)
    {
        getline(arquivo10, line);
        cout << line << endl;
    }

    arquivo10.close();

    return 0;
}