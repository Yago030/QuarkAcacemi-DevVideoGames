//Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".

#include<iostream>

using namespace std;


int main() {

	float notas =0, promedio, aux;

	cout << "Por favor ingresar las 3 notas para corroborar el promedio:  ";

	for (int i = 0; i < 3; i++)
	{
		aux = 0;
		cout << "Ingrese la nota : "+ i;
		cin >> aux;
		notas += aux;


	}

	promedio = notas / 3;

	if (promedio >= 7) {
		cout << " PROMOCIONADO ";
	}




	return 0;
}