//Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez".


#include<iostream>

using namespace std;


int  main() {

	int num1, num2, num3;

	cin >> num1;
	cin >> num2;
	cin >> num3;


	if (num1 < 10 || num2 < 10 || num3 < 10) {
		cout << "Alguno de los numeros es inferior  a 10 ";
	}



	return 0;

}
