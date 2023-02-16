//Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero).

// Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)


#include<iostream>


using namespace std;

int main() {

	int y, x;

	cout << "ingrese el eje X : ";
	cin >> x;

	cout << "ingrese el eje y : ";
	cin >> y;



	if (x > 0 && y > 0) {

		cout << " PRIMER CUADRANTE";
	}
	else if (x < 0 && y>0) {
		cout << "Segundo cuadrante ";
	}
	else if (x < 0 && y < 0) {
		cout << "Tercer cuadrante ";
	}
	else {
		cout << "cuarto cuadrante ";
	}





	return 0;
}