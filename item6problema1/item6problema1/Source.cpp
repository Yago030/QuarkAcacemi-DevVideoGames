//Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y 
//diferencia, en caso contrario informar el producto y la división del primero respecto al segundo.

#include<iostream>

using namespace std;

int main() {

	float suma, division, producto, num1, num2;

	cout << "ingrese el primer numero : ";
	cin >> num1;

	cout << "ingrese el segundo numero: ";
	cin >> num2;

	if (num1 > num2) {
		cout << "Al ser mayor el primero al segundo SUMAMOS: \n";
		suma = num1 + num2;
		cout << "La suma es:  ";
		cout << suma;
		cout << " la diferencia entre los dos numeros es: ";
		cout << num1 - num2;
	}
	else {
		cout << "Al ser menor el primero multiplicamos y  dividimos : ";
			division = num1 / num2;
			producto = num1 * num2;

			cout << "\n division: ";
			cout << division;

			cout << "\n multiplicacion: ";
			cout << producto;


	}


	return 0;
}