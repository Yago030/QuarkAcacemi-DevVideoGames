//En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados 
//cobran entre $100 y $300 y cuántos cobran más de $300.Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.

#include <iostream>
using namespace std;

int main() {


	int nempleados,aux=0;
	double maso300=0, mas300=0, sueldomensual=0, monto;


	cout << " ingrese el numero de empleados:  "; cin >> nempleados;

	while (aux < nempleados) {

		aux += 1;

		cout << "ingrese el sueldo a cobrar por el empleado: " << aux << " $ "; cin >> monto;

		if (monto >= 100 && monto <= 300) {
			maso300 += 1;
			sueldomensual += monto;
		}
		else {
			mas300 += 1;
			sueldomensual += monto;
		}





	}

	cout << "Los empleados que cobran 300 o menos son : " << maso300 << endl;


	cout << "Los empleados que cobran mas de 300  son : " << mas300 << endl;


	cout << "El sueldo total es de:  " << sueldomensual<< endl;


	return 0;
}