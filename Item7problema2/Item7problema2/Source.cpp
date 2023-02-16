//Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y
//muestre un mensaje indicando si tiene 1, 2, o 3 cifras.Mostrar un mensaje de error si
//el número de cifras es mayor.


#include<iostream>

using namespace std;

int  main() {

	int num;
	cout << "ingresa el numero  : ";
	cin >> num;

	while (num < -999 || num > 999) {

		cout << "El numero ingresado no es valido,ingresa un numero hasta 3 cifras \n";
		cin >> num;
	}

	if (num <= 9 && num >-9) {
		cout << "tiene una  cifras ";
	}
	else if (num <= 99  && num>99 || num >= -99 && num <=99) {
		cout << "El numero tiene dos cifras ";

	}
	else {

		cout << "El numero tiene 3 cifras";
	}



	return 0;
}