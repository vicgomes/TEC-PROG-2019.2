#include <iostream>
#include <fstream>//para a manipulação de arquivos

#define NUM_VALORES 500
#define LIM_NUM 1000

using namespace std;

int main()
{
    ofstream arquivo;
    arquivo.open("random.txt");

    int random;
    srand(time(NULL));
    for(int i = 0;i < NUM_VALORES;i++)
    {
        random = rand()%LIM_NUM;//para limitar o número
        arquivo << random << endl;
    }

    arquivo.close();
    cout << endl;
    return 0;
}
