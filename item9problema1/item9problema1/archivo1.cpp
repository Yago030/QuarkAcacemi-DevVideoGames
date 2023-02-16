//Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.


#include<iostream>

using namespace std;

int main() {

	int nota, mayor7=0, menor7=0, aux=0;


	cout << "Ingrese las 10 notas de los alumnos: ";

	while (aux < 10) {
		cout << "Ingresa la nota para el alumno    " << aux << "  =  ";
		cin >> nota;

		if (nota >= 7) {
			mayor7 += 1;
		}
		else {
			menor7 += 1;
		}

		aux += 1;
	}

	cout << " los alumnos con una nota mayor o igual    7 son : " << mayor7<<endl;
	cout << " los alumnos con una nota menor a  7 son : " << menor7 << endl;






	return 0;
}