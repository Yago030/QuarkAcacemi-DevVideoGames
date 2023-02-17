

#include<iostream>

using namespace std;

int main() {

	char cadena1[50];
	char cadena2[50];

	cout << "Ingrese la primera cadena _: "; cin.getline(cadena1, 50);
	cout << "Ingrese la primera cadena _: "; cin.getline(cadena2, 50);


	if (strcmp(cadena1, cadena2) == 0) {
		cout << "Las cadenas eran iguales_ ";
	}
	else if (strcmp(cadena1, cadena2) > 0) {
		cout << "La primer cadena era mayor";
	}
	else if (strcmp(cadena1, cadena2) < 0) {
		cout << "La segunda cadena era mayor";
	}



	return 0;
}