//De un operario se conoce su sueldo y los a�os de antig�edad. Se pide confeccionar un programa que lea los datos de entrada e informe:
///a) Si el sueldo es inferior a 500 y su antig�edad es igual o superior a 10 a�os, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
//b)Si el sueldo es inferior a 500 pero su antig�edad es menor a 10 a�os, otorgarle un aumento de 5 % .
//c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.


#include<iostream>

using namespace std;

int main() {
		

	double antiguedad, sueldo; 

	cout << "Ingrese la antiguedad del empleado: ";
	cin >> antiguedad;


	cout << "ingrese el sueldo : ";
	cin >> sueldo;


	if (sueldo < 500 && antiguedad >= 10) {
		sueldo += sueldo * 0.20;
		cout << "El sueldo es : ";
		cout << sueldo;
	}
	else if (sueldo < 500 && antiguedad < 10) {
		sueldo += sueldo * 0.05;
		cout << sueldo;
	}
	else if (sueldo >= 500) {
		cout << "sueldo queda igual_: ";
		cout << sueldo;
	}



	return 0;
}