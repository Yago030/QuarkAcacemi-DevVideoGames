#include<iostream>
using namespace std;

int main() {

	int suma, producto, num1, num2, num3, num4, producto;

	cout << "ingrese los 4 valores a operar : ";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;

	suma = num1 + num2;
	producto = num3 * num4;


	cout << "La suma de los dos primeros numeros es : ";
	cout << suma;
	cout << "\n";
	cout << "El  producto  de los dos ultimos  numeros es : ";
	cout << producto;

	return 0;
}