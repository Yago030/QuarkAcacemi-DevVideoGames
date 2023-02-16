//Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e informe su rango de variación (debe mostrar el mayor y el menor de ellos)



#include<iostream>

using namespace std;


int main() {
	int  valor1, valor2, valor3, rangoVar, menor, mayor;


	cout << "ingrese 3 valores _: ";
	cin >> valor1; 
	cin >> valor2;
	cin >> valor3;

	if (valor1 > valor2 && valor1 > valor3) {
		mayor = valor1;
	}
	else if (valor2 > valor1 && valor2> valor3) {
		mayor = valor2;

	}
	else {
		mayor = valor3;
	};

	if (valor1 < valor2 && valor1 < valor3) {
		menor = valor1;
	}
	else if (valor2 < valor1 && valor2 < valor3) {
		menor = valor2;

	}
	else {
		menor = valor3;
	};

	rangoVar = mayor - menor;


	cout << "el numero mayor es : ";

	cout << mayor;
	cout << "el numero menor  es : ";
	cout << menor;

	cout << "el rango de diferencia es de : ";
	cout << rangoVar;











	return 0;
}