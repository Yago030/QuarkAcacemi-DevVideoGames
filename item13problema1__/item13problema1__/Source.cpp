//Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. 
//Confeccionar los métodos para la carga, otro para imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)


#include<iostream>

using namespace std;


class Empleado {
private:
	char nombre[40];
	double sueldo;

public:
	void inicializar();
	void imprimirDatosEmpleado();
	void pagaImpuestos();
};

void Empleado::inicializar() {
	cout << "Ingrese el nombre del empleado por favor : "; cin.getline(nombre, 40);
	cout << " \ingrese el sueldo por favor: "; cin >> sueldo;
}


void Empleado::imprimirDatosEmpleado() {
	cout << "\n El nombre es: " << nombre;
	cout << "\n Su sueldo es: " << sueldo;
}

void Empleado::pagaImpuestos() {
	if (sueldo > 3000) {
		cout <<"Paga impuestos ";
	}
	else {
		cout << " No paga impuestos";
	}

}


int main() {
	Empleado pepe;
	pepe.inicializar();
	pepe.imprimirDatosEmpleado();
	pepe.pagaImpuestos();

	return 0;
}