/*Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios.
Definir dos vectores paralelos.
Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.
*/

#include<iostream>
using namespace std;

class Productos {
private:
	char nombreProducto[5][40];
	double productoPrecio[5];

public :
	void cargar();
	void compararPrecios();
};


void Productos::cargar() {
	cout << "Cargar Productos y precios : ";

	for (int i = 0; i < 5; i++)
	{
		cout << "\n Nombre Producto : "; cin >> nombreProducto[i];

		cout << "\nPrecio producto: "; cin >> productoPrecio[i];


	}
	
	compararPrecios();

}

void Productos::compararPrecios() {
	int mayor = 0;

	for (int  i = 0; i < 5; i++)
	{
		if (productoPrecio[0] < productoPrecio[i]) {
			mayor += 1;
		}
	}

	cout << " la cantidad de productos con precio mayor al primer producto son: " << mayor;
}

int main() {
	Productos p;
	p.cargar();
}