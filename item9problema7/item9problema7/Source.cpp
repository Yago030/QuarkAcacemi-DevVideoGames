//Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.
//Emplear el operador “% ” en la condición de la estructura condicional(este operador retorna el resto de la división de dos valores, por ejemplo 11 % 2 retorna un 1) :

	// if (valor % 2 == 0)         //Si el if da verdadero luego es par.


#include<iostream>

using namespace std;

int main() {


	int ncargar, pares = 0, impares = 0, aux=0,valor;

	cout << "cuantos numeros deseas cargar = "; cin >> ncargar;

	while (aux < ncargar) {

		cout << "Ingrese el numero " << aux + 1 << "°  = "; cin >> valor;

		if (valor % 2 == 0) {
			pares += 1;
		}
		else {
			impares += 1;
		}


		aux += 1;
	}


	cout << "Numeros pares: " << pares;
	cout << "Numeros impares: " << impares;


	return 0;
}
