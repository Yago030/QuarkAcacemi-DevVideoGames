//Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
//(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)


#include<iostream>
using namespace std;

int main() {

	int num;

	cout << "ingrese el numero por favor: ";
	cin >> num;

	while (num <= 0 ||  num > 99) {
		cout << "El numero ingresado NO ES VALIDO, deben ser positivos y menor  a 99 \n";
		cin >> num;
	}

	if (num >= 10) {
		cout << "tiene dos digitos ";
	}
	else {

		cout << "tiene un digito";
	}


	return 0;
}