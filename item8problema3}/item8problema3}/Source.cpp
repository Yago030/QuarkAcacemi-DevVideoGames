//Se ingresan por teclado tres n�meros, si todos los valores ingresados son menores a 10, imprimir en pantalla la leyenda "Todos los n�meros son menores a diez".

#include<iostream>


using namespace std;


int main() {

	int num1, num2, num3;

	cout << "ingrese 3 numeros :  ";
	cin >> num1;
	cin >> num2;
	cin >> num3;

	if (num1 < 10 && num2 < 10 && num3 < 10) {
		cout << "Los 3 numeros son menores  a 10 ";
	}




	return 0;
}