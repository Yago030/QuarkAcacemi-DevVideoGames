//Se ingresa por teclado un n�mero positivo de uno o dos d�gitos (1..99) mostrar un mensaje indicando si el n�mero tiene uno o dos d�gitos.
//(Tener en cuenta que condici�n debe cumplirse para tener dos d�gitos un n�mero entero)


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