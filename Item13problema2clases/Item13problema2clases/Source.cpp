//Implementar la clase operaciones. Se deben cargar dos valores enteros, calcular su suma, resta, multiplicación y división, cada una en un método, imprimir dichos resultados.


#include<iostream>

using namespace std;

class Operaciones {
private:
	int num1;
	int num2;

public:
	void cargar();
	void imprimir();
};


void Operaciones::cargar() {
	cout << "Ingresa el numero  1 por favor: "; cin >> num1;
	cout << "Ingresa el numero 2  por favor: "; cin >> num2;
}

void Operaciones::imprimir() {
	int  suma = num1 + num2;
	int resta = num1 - num2;
	int multiplicacion = num1 * num2;
	double division = num1 / num2;

	cout << "El resultado de las operacines es: " << endl;
	cout << "SUMA ---> " << suma << endl;
	cout << "RESTA ---> " << resta << endl;
	cout << "Multiplicacion ---> " << multiplicacion << endl;
	cout << "Division ---> " << division << endl;
}
	


int main() {
	Operaciones calcu;
	calcu.cargar();
	calcu.imprimir();

	return 0;
}