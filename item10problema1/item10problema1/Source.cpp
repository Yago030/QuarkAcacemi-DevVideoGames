//Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un triángulo.El programa deberá informar :
//a) De cada triángulo la medida de su base, su altura y su superficie.
//b) La cantidad de triángulos cuya superficie es mayor a 12


#include<iostream>

using namespace std;


int main() {


	int base, altura, cantidadDatos, mayor12 = 0;
	double  superficie = 0;

	cout << "Cuantos triangulos deseas cargar : "; cin >> cantidadDatos;

	for ( int i = 0;  i < cantidadDatos;  i++)
	{
		cout << "Ingrese la altura del triangulo : "; cin >> altura;
		cout << "Ingrese la base del triangulo; "; cin >> base;

		superficie = base * altura;

		cout << " TRIANGULO " << i + 1 << " *** base = " << base << "   altura = " << altura << " **** superficie ----> " << superficie << endl << endl;

		if (superficie < 12) {
			mayor12 += 1;
		}


	}

	cout << "TRIANGULOS CON SUPERFICIE MAYOR A 12 : " << mayor12;




	return 0;
}