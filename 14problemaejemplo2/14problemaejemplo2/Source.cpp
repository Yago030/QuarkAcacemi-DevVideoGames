/* Confeccionar una clase que permita ingresar tres valores por teclado. Luego mostrar el mayor y el menor. Retornar dichos valores mediante el return.*/


#include<iostream>

using namespace std;

class MayorMenor {
private:
	int calcularMenor(int v1, int v2, int v3);
	int calcularMayor(int v2, int v3, int v4);

public:
	void cargarValores();
};

int MayorMenor::calcularMayor(int v1, int v2, int v3) {
	int mayor;

	if (v1 > v2 && v1 > v3) {
		mayor = v1;
	}
	else {
		if (v2 > v3) {
			mayor = v2;
		}
		else {
			mayor = v3;
		}
	}
	return mayor;
}

int MayorMenor::calcularMenor(int v1, int v2, int v3) {
	int menor;

	if (v1 < v2 && v1 < v3) {
		menor = v1;
	}
	else {
		if (v2 < v3) {
			menor = v2;
		}
		else {
			menor = v3;
		}
	}


	return menor;
}


void MayorMenor::cargarValores() {

	int v1, v2, v3, menor, mayor;

	cout << "\n Ingrese V1 por favor: "; cin >> v1;
	cout << "\n Ingrese V2 por favor: "; cin >> v2;
	cout << "\n Ingrese V3 por favor: "; cin >> v3;

	mayor = calcularMayor( v1,  v2,  v3);
	menor  = calcularMenor( v1,  v2,  v3);


	cout << "\n El mayor de los 3 es: " << mayor;
	cout << "\n el menor de los 3 es : " << menor;


	cin.get();
	cin.get();
}


int main() {
	MayorMenor medidor;

	medidor.cargarValores();



	return 0;
}