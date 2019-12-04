#ifndef FRUTA_H
#define FRUTA_H
#include <iostream>

using namespace std;

class Fruta
{
    private:
        string nome;
        string cor;
    public:
        Fruta();
        Fruta(string n, string c);

        void set_nome(string n);
        void set_cor(string c);

        string get_nome();
        string get_cor();
};

#endif