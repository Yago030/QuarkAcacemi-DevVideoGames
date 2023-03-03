/*
Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. 
Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.
*/

#include<iostream>

using namespace std;

class JuegoVectores {
private:
	int vector1[4];
	int vector2[4];

public:
	void cargarVectores();
	void sumaVectores();

};

void JuegoVectores::cargarVectores() {
	cout << "\n Ingrese el primer Vector: ";
	for (int  i = 0; i < 4; i++)
	{
		cout << "Ingresando primer vector: "; cin >> vector1[i];
	}

	cout << "\n Ingrese el segundo  Vector: ";
	for (int i = 0; i < 4; i++)
	{
		cout << "Ingresando primer vector: "; cin >> vector2[i];
	}

	sumaVectores();

}

void JuegoVectores::sumaVectores() {

	

	int vectorsuma[4];

	for (int i = 0; i < 4; i++)
	{
		vectorsuma[i] = vector1[i] + vector2[i];
	}


	cout << "\n El resultado de la suma de vectores es: \n";

	for (int i = 0; i < 4; i++)
	{
		cout << " Posicion [ " << i << " ] " << "  ---->   " << vectorsuma[i]<<" \n";
	}

}


int main() {

	JuegoVectores v1;

	v1.cargarVectores();

	return 0;
}
