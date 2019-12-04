#include "file.h"

#define NUM_VALORES 500
#define LIM_NUM 1000

void criar_arquivo()
{
    ofstream arquivo_s;

    arquivo_s.open("valores.txt", ios::app);
        int random;

        srand(time(NULL));
        for(int i = 0;i < NUM_VALORES;i++)
        {
            random = rand()%LIM_NUM;//para limitar o número
            arquivo_s << random << endl;
        }
    arquivo_s.close();
}

void set_vetor(vector<int> &v)
{
    ifstream arquivo_e;
    int temp = 0;

    arquivo_e.open("valores.txt");

        while(arquivo_e >> temp)
            v.push_back(temp);
    
    arquivo_e.close();

    sort(v.begin(), v.end());
}

void mostrar_vetor(vector<int> &v)
{
    for(int valor : v)
    {
        cout << valor;
    }
    
    cout << endl;
}

bool teste(int referencial, int posicao, vector<int> v)
{
    bool b = true;
    for(;posicao < v.size();posicao++)
    {
        if(v[posicao + 1] == referencial)
        {
            b = false;
            break;
        }
    }

    return b;
}

bool ordenar_freq(DadosSensor a, DadosSensor b)
{
    return a.get_frequencia() >= b.get_frequencia();
}

void ordernar_classe(vector<DadosSensor> &vDados)
{
    sort(vDados.begin(), vDados.end(), ordenar_freq);
}

void vetor_para_dados(vector<int> v, vector<DadosSensor> &vDados)
{
    for(int i = 0;i < v.size();i++)
    {
        if(teste(v[i], i, v))
        {
            vDados.push_back(DadosSensor(v[i], count(v.begin(), v.end(), v[i])));
        }
    }
}

void show(vector<DadosSensor> &vDados)
{
    for(auto elemento : vDados)
    {
        elemento.print_dados();
    }

    cout << endl;
}