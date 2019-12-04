#include <iostream>
#include "fruta.h"
#include "banana.h"
#include "maca.h"

int main(){
	Maca a("vermelha");
	Banana b;
 
	cout << "A " << a.get_nome() << " é " << a.get_cor() << ".\n";
	cout << "A " << b.get_nome() << " é " << b.get_cor() << ".\n";
	return 0;
}