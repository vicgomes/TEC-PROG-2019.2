#include "sensor.h"

DadosSensor::DadosSensor()
{
    valor = 0;
    frequencia = 0;
}

DadosSensor::DadosSensor(int v, int f)
{
    valor = v;
    frequencia = f;
}

int DadosSensor::get_valor()
{
    return valor;
}

int DadosSensor::get_frequencia()
{
    return frequencia;
}

void DadosSensor::print_dados()
{
    cout << endl << "Valor: " << get_valor() << endl;
    cout << "Frequência: " << get_frequencia() << " vezes" << endl;
}