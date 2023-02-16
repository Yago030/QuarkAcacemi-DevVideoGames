//Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero.


#include<iostream>

using  namespace std;


int main() {

	int num1, num2, num3, resultado;

	cout << "ingrese el numero 1 : ";
	cin >> num1;
	cout << "ingrese el numero 2 : ";
	cin >> num2;
	cout << "ingrese el numero 3 : ";
	cin >> num3;


	if (num1 == num2 && num2 == num3) {

		cout << "Los numeros ingresados son iguales: ";
		resultado = (num1 + num2) * num3;
		cout << resultado;



	}


	return  0;
}