//Realizar un programa que permita cargar dos listas de 15 valores cada una.
//Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")

#include<iostream>

using namespace std;

int main() {

	int lista1 = 0 , lista2=0, aux1 = 0, aux2 = 0, valor;

	while (aux1 <1 ) {

		
		while (aux2 < 15) {
			cout << "LISTA 1 = ingresa un valor para el lugar " << aux2 << "  = "; cin >> valor;
			lista1 += valor;
			aux2 += 1;
		}

		aux2 = 0;

		while (aux2< 15) {
			cout << "LISTA 2 = ingresa un valor para el lugar " << aux2 << "  = "; cin >> valor;
			lista2 += valor;
			aux2 += 1;
		}


		aux1 += 1;
	}

	
	if (lista1 > lista2) {
		cout << "La lista 1 es mayor con un total de : " << lista1;

	}
	else if (lista2 > lista1) {
		cout << "La lista 2 es mayor con un total de : " << lista2;

	}
	else if (lista1 == lista2) {
		cout << "La listas son iguales !!!" << endl;
	}


	return 0;
}