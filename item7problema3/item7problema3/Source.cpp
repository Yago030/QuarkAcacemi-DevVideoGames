#include<iostream>

//Nivel máximo : Porcentaje >= 90 % .
//Nivel medio : Porcentaje >= 75 % y < 90 % .
	//Nivel regular : Porcentaje >= 50 % y < 75 % .
	//Fuera de nivel : Porcentaje < 50 % .


using namespace std;

int main() {

	int cantPreguntas, cantCorrectas;
	double porcentaje;
	


	cout << "ingrese la cantidad de preguntas del aspirante:  ";
	cin >> cantPreguntas;
	cout << "ingrese la cantidad de preguntas acertadas por el aspirante : ";
	cin >> cantCorrectas;

	porcentaje = (cantCorrectas * 100) / cantPreguntas;

	if (porcentaje >= 90 ) {
		cout << "nivel maximo ";
	}
	else if (porcentaje >= 75 && porcentaje < 90) {
		cout << "Nivel Medio";
	}
	else if (porcentaje >= 50 && porcentaje < 75) {
		cout << "nivel regular ";
	}
	else {

		cout << "Fuera nivel ";
	}







	return 0;
}