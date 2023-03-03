/*
Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
*/

#include<iostream>

using namespace std;

class Vector8 {
private:
	int vector[8];

public:
	void cargar();
	void acumuluados();
};


void Vector8::cargar() {
	cout << " *****    cargaremos los datos a continuacion: ************** \n";
	int valor;
	for (int  i = 0; i < 8; i++)
	{

		cout << "\n Primer valor: "; cin >> vector[i];

	}
	acumuluados();

}

void Vector8::acumuluados() {
	int sumAcum = 0, sumaMayor=0;
	for (int  i = 0; i < 8; i++)
	{
		sumAcum += vector[i];

		if (vector[i] > 36) {
			sumaMayor += vector[i];
		}
	}

	cout << "\n La suma total de los 8 elementos es: " << sumAcum << "      En cuanto la suma de los elementos mayor a 36: " << sumaMayor;

}

int main() {

	Vector8 v8;
	v8.cargar();

	return 0;
}