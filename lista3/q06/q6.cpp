#include <iostream>
#include "dados.h"

using namespace std;

int main()
{
    DadosSensor dados(7, 60);
    dados.print_dados();
    return 0;
}