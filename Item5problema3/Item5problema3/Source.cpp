#include<iostream>
using namespace std;

int main() {



		int suma, promedio, num1, num2, num3, num4;

		cout << "ingrese los 4 valores a operar : ";
		cin >> num1;
		cin >> num2;
		cin >> num3;
		cin >> num4;

		suma = num1 + num2 + num3  + num4;
		promedio  = suma / 4;


		cout << "La suma de los numeros es : ";
		cout << suma;
		cout << "\n";
		cout << "El  promedio   de los 4    numeros es : ";
		cout << promedio;

		
	return 0;
}