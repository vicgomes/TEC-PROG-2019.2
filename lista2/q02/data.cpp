#include "Q2.h"

#define JANEIRO 1
#define DEZEMBRO 12

using namespace std;

//SETTERS:

void Data::set_dia(int d){
    cout << "\nInsira o dia desejado: ";
    cin >> d;

    dia = d;
}

void Data::set_mes(int m){
    cout << "\nAgora, insira o mês desejado: ";
    cin >> m;

    if(m >= JANEIRO and m <= DEZEMBRO) mes = m;
    else mes = JANEIRO;
}

void Data::set_ano(int a){
    cout << "\nPor fim, insira o ano desejado: ";
    cin >> a;

    ano = a;
}



//GETTERS:

int Data::get_dia(){
    return dia;
}

int Data::get_mes(){
    return mes;
}

int Data::get_ano(){
    return ano;
}



//OBTER E MOSTRAR DADOS:

void Data::obter_dados(){
    int dia_temp;
    int mes_temp;
    int ano_temp;
    
    set_dia(dia_temp);
    set_mes(mes_temp);
    set_ano(ano_temp);

}

void Data::mostrar_dados(){
    cout << "\n\nA data é: ";
    cout << get_dia() << "/" << get_mes() << "/" << get_ano() << "\n\n";
}