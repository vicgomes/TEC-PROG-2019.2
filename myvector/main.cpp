#include <iostream>
#include <algorithm>
#include "myvector.h"

using namespace std;

int main()
{
    MyVector notas;
    MyVector novas_notas;
    MyVector resultado;

    notas.adicionar(70);
    notas.adicionar(55);
    notas.adicionar(44);

    novas_notas.adicionar(30);
    novas_notas.adicionar(20);
    novas_notas.adicionar(10);
    
    notas.show();
    notas = notas + 10 + 20;
    notas.show();

    resultado.ordenar();
    resultado = notas + novas_notas;
    resultado.show();
    cout << resultado[-1] << endl;

    return 0;
}

//cpp - reference