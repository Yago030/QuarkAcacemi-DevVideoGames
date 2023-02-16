//Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados.


#include<iostream>

using namespace std;


int main() {


	int valor, ultimos5=0;

	for ( int  i = 0;   i < 10;   i++)
	{

		cout << "\n Ingresa el numero " << i+1 << " = "; cin >> valor;

		if (i >= 5) {
			ultimos5 += valor;
		}

	}

	cout << "\n La suma de los ultmos 5 numeros es: " << ultimos5;
		



	return 0;
}