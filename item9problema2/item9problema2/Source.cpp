//Se ingresan un conjunto de n alturas de personas por teclado.Mostrar la altura promedio de las personas.

#include<iostream>

using namespace std;


int npersonas,aux =0;
double promedio, altura;

int main() {

	cout << " cuantas personas deseas preguntarle la edad : "; cin >> npersonas;

	while (aux < npersonas) {
		cout << "ingrese la altura de la persona : ";
		cin >> altura;
		aux += 1;
		promedio += altura;

	}
	promedio /= npersonas;

	cout << " El promedio de personas es de : " << promedio << endl;



	return 0;
}