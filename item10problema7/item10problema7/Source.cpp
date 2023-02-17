//Se realiza la carga de 10 valores enteros por teclado.Se desea conocer :
//a) La cantidad de valores ingresados negativos.
//b) La cantidad de valores ingresados positivos.
//c) La cantidad de múltiplos de 15.
//d) El valor acumulado de los números ingresados que son pares.

#include<iostream>

using namespace std;

int main() {

	int valor  , valoresNegativos = 0, valoresPositivos = 0 , multiplos15 = 0 , acumPares = 0;
	for (int  i = 0; i <10 ; i++)
	{
		cout << "ingrese el  " << i + 1 << " valor -----> "; cin >> valor;

		if (valor < 0) {
			valoresNegativos += 1;
		}
		else if (valor > 0) {
			valoresPositivos += 1;
		};


		if (valor % 15 == 0) {
			multiplos15 += 1;
		}
		if (valor % 2 == 0) {
			acumPares += valor;
		}
	}


	cout << "\n La cantidad de numeros pares sumados son: " << acumPares << endl;
	cout << "La cantidad de numeros multiplos de 15  son: " << multiplos15 << endl;
	cout << " La cantidad de numeros positivos son: " << valoresPositivos << endl;
	cout << " La cantidad de numeros negativos son: " << valoresNegativos << endl;

	return 0; 
}