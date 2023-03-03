//Implementar la clase operaciones. Se deben cargar dos valores enteros, calcular su suma, resta, multiplicación y división, cada una en un método, imprimir dichos resultados.

#include<iostream>
using namespace std;


class Operaciones {
private:
	double num1, num2;

public:
	void inicializar();
	void suma();
	void resta();
	void multiplicacion();
	void division();

	void todoJunto();

};

void Operaciones::inicializar() {
	cout << "Ingrese el primer numero por favor: "; cin >> num1;
	cout << "Ingrese el segundo numero: "; cin >> num2;
}

void Operaciones::suma() {
	cout << "\n suma: " << num1 + num2;
}

void Operaciones::resta() {
	cout << "\n resta: " << num1 - num2;
}

void Operaciones::multiplicacion() {
	cout << "\n multiplicacion: " << num1 * num2;
}

void Operaciones::division() {
	cout << "\n division: " << num1 / num2;
}


void Operaciones::todoJunto(){
	inicializar();
	suma();
	resta();
	multiplicacion();
	division();
}

int main() {

	Operaciones op;

	op.inicializar();
	op.suma();
	op.multiplicacion();
	op.resta();
	op.division();


	cout << " \n ****************** numero dos todo junto   ****************** \n";

	Operaciones op2;
	op2.todoJunto();
	return 0;
}