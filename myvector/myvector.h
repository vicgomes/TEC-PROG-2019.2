#ifndef MYVECTOR_H
#define MYVECTOR_H
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MyVector
{
    private:
        vector<int> vetor;
    public:
        void adicionar(int n);
        void show();

        MyVector operator+(int valor);
        MyVector operator+(MyVector b);

        int operator[](int posicao);

        void ordenar();
};

#endif