//Desarrollar un programa que cargue los lados de un triángulo e implemente los siguientes métodos: inicializar los atributos, imprimir el valor del lado mayor y otro método que muestre si es equilátero o no.

#include<iostream>;

using namespace std;


class Triangulo {
private:
	int lado1, lado2, lado3;

public :
	void inicializar();
	void imprimirLadoMayor();
	void esEquilatero();

};

void Triangulo::inicializar() {
	cout << "\n  Ingrese el lado 1: "; cin >> lado1;
	cout << "\n  Ingrese el lado 2: "; cin >> lado2;
	cout << "\n  Ingrese el lado 3: "; cin >> lado3;
}

void Triangulo::imprimirLadoMayor() {

	if (lado1 > lado2 && lado1 > lado3) {
		cout << "\n El lado 1 es el mayor: ";
	}
	else if (lado2 > lado1 && lado2 > 3) {
		cout << "\n el lado 2 es el mayor";
	}
	else if (lado3 > lado1 && lado3 > lado2) {
		cout << "\n lado 3 es mayor ";
	}
	else {
		cout << "\n Los 3 lados son iguales";
	}

	
}

void Triangulo::esEquilatero() {
	if (lado1 == lado2 && lado1 == lado3) {
		cout << " \n es equilatero--- ";
	}
	else {
		cout << "No es equilatero--- ";
	}
	cin.get();
	cin.get();
}


int main() {

	Triangulo t1;

	t1.inicializar();
	t1.imprimirLadoMayor();
	t1.esEquilatero();


	return 0;
}