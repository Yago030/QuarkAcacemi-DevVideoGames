//Desarrollar una clase con dos métodos, uno para la carga de dos enteros. Definir un método privado que le enviemos los valores ingresados por teclado y nos retorne el mayor de ellos.


#include<iostream>

using namespace std;


class TwoMetodos {
private:
	int mayor(int v1, int v2);

public:
	void carga();
};


int TwoMetodos::mayor(int v1, int v2) {
	int mayor;
	if (v1 > v2) {
		mayor = v1;
	}
	else if (v2 > v1) {
		mayor = v2;
	}
	else {
		mayor = 0;
	}


	return mayor;
}

void TwoMetodos::carga(){
	int v1, v2;
	cout << "Ingrese el numero V1:_ "; cin >> v1;
	cout << "\n Ingese el nuemero V2:_ "; cin >> v2;

	int grande = mayor(v1, v2);

	cout << "El mayor es : " << grande;

}

int main() {
	TwoMetodos t1;
	t1.carga();
	return 0;
}