#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

#define NUM_VALORES 500
#define LIM_NUM 1000

using namespace std;

int main()
{
    ofstream guardar;
    vector<int> vetor;

    guardar.open("valores.txt");
        int random;

        srand(time(NULL));
        for(int i = 0;i < NUM_VALORES;i++)
        {
            random = rand()%LIM_NUM;//para limitar o número
            guardar << random << endl;
            vetor.push_back(random);
        }
    guardar.close();

    for(int valor : vetor)
    {
        cout << valor << endl;
    }
    
    return 0;
}
