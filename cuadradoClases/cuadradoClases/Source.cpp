//Desarrollar una clase que represente un Cuadrado y tenga los siguientes métodos : cargar el valor de su lado, imprimir su perímetro y su superficie.

#include<iostream>

using namespace std;

class Cuadrado {
private:
	int lado;

public: 
	void inicializar();
	void imprimirPerimetro();
	void imprimirSuperficie();
};

void Cuadrado::inicializar() {
	cout << "Ingrese el lado del cuadrado: "; cin >> lado;
}

void Cuadrado::imprimirPerimetro() {
	cout << "\n El perimetro es : " << lado * 4;
}

void Cuadrado::imprimirSuperficie() {
	cout << "\n la superficie es de: " << lado * lado;
}


int main() {
	Cuadrado c1;
	c1.inicializar();
	c1.imprimirPerimetro();
	c1.imprimirSuperficie();

	return 0;
}