//Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)


#include<iostream>

using namespace std;


int main() {

	int aux = 0, incr = 11;;

	while (aux < 25) {
		cout << "Ronda: " << aux + 1 << " .... = " << incr;
		incr += 11;

		aux += 1;
	}



	return 0;
}