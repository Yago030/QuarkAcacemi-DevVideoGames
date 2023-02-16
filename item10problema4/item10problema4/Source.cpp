//Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)

#include<iostream>

using namespace std;


int main() {

	int valor;

	cout << "Ingresa un valor entre el 1 y el 10 por favor : "; cin >> valor;

	while (valor > 10 || valor < 0) {

		cout << " NUMERO NO VALIDO , INGRESA UNO VALIDO_ : "; cin >> valor;


	}

	for (int i = 0; i <= 12; i++)
	{

		cout << valor<<" x " << i << " =  " << valor * i << endl;


	}








	return 0;
}

