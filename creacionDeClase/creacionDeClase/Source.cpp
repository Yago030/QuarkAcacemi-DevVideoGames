#include<iostream>


using namespace std;

//defino la clase

class Persona { 

private: //ATRIBUTOS
	char nombre[40];
	int edad;
public: //METODOS
	void inicializar();
	void imprimir();
	void esMayorEdad();
};

void Persona::inicializar() { //Esto es definimos los metodos de la clase
	cout << "Ingrese el nombre: "; cin.getline(nombre, 40);
	cout << "Ingrese la edad : "; cin >> edad;
}


void Persona::imprimir() {

	cout << "Nombre: " << nombre << endl;;
	cout << "Edad: " << edad << endl;
	
}


void Persona::esMayorEdad() {
	if (edad >= 18)
	{
		cout << "Es mayor de edad.";
	}
	else
	{
		cout << "No es mayor de edad.";
	}
	cin.get();
	cin.get();
}


int main() {
	Persona persona1;
	persona1.inicializar();
	persona1.imprimir();
	persona1.esMayorEdad();

	cin.get(); //esto hace que el prograam quede en standby, para darle enter y seguir con la carga

	Persona persona2;
	persona1.inicializar();
	persona1.imprimir();
	persona1.esMayorEdad();

	return 0;
}
