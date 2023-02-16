#include<iostream>
using namespace std;

int main() {

	int articulo;
	float precio, costo;

	cout << "ingrese la cantidad de articulos a llevar : ";
	cin >> articulo;
	cout << "\n Ingrese el costo del articulo: ";
	cin >> precio;

	costo = precio * articulo;

	cout << "\n El costo del total de los productos elegidos es de  : ";
	cout << costo;
	

	return 0;
}s