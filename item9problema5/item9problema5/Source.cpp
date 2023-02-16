//Mostrar los múltiplos de 8 hasta el valor 500. Debe aparecer en pantalla 8 - 16 - 24, etc.


#include<iostream>

using namespace std;


int main() {

	int aux = 0, incr = 0;;

	while (incr <= 500) {
		cout << "Ronda: " << aux + 1 << " .... = " << incr<<endl;
		incr += 8;

		aux += 1;
	}



	return 0;
}