//Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga). 
//Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.


#include<iostream>

using namespace std;

int main() {

	int valor, acum=0;


	do {
		cout << "Ingrese el valor por favor --> "; cin >> valor;

		if (valor != 9999) {

			acum += valor;

		}


	} while (valor != 9999);

	if (valor>0) {
		cout << "Es mayor a cero;" << acum;
	}
	else if (valor == 0) {
		cout << "Es igual a cero " << acum;
	}
	else {
		cout << "es menor a cero "<<acum;
	}




	return 0;
}