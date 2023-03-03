//Confeccionar una clase que permita cargar el nombre y la edad de una persona. Mostrar los datos cargados. Imprimir un mensaje si es mayor de edad (edad>=18) o no


#include<iostream>

using namespace std;

class Persona {
private:
	char nombre[40];
	int edad;

public:
	void inicializar();
	void imprimir();
	void esMayor();

};

void Persona::inicializar() {
	cout << "Ingrese el nombre: "; cin.getline(nombre, 40);
	cout << "Ingrese la edad : "; cin >> edad; 
}

void Persona::imprimir() {
	cout << "El nombre es: " << nombre;
	cout << "\n la edad es: " << edad;
}

void Persona::esMayor() {
	if (edad >= 18) {
		cout << "Es mayor de edad: ";
	}
	else {
		cout << "\n No es mayor, es un niño";
	}

	cin.get();
	cin.get();
}


//************************** MAIN ********************************
int main() {
	Persona person1;
	person1.inicializar();
	person1.imprimir();
	person1.esMayor();

	Persona person2;
	person2.inicializar();
	person2.imprimir();
	person2.esMayor();

	return 0;
}


/*
#include<iostream>

using namespace std;

int main() {
	char nombre[40];
	int edad;

	cout << "ingrese el nombre: "; cin.getline(nombre, 40);
	cout << "Ingrese la edad:  "; cin >> edad;

	cout << "Nombre: " << nombre << " edad: " << edad;


	if (edad >= 18) {
		cout << "Es mayor de edad el facha: ";
	}
	else {
		cout << "\n Es menor de edad: ";
	}


	return 0;
}
*/