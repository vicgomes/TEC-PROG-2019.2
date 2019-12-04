#include "point.h"

int main(){
   Point2d inicio;
   Point2d fim(3.0, 4.0);
   inicio.print();
   fim.print();
   cout << "A distância entre os pontos é : "<<inicio.distancia(fim)<<endl;
    return 0;
}
