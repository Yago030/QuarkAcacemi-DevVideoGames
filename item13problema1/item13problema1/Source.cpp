//Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. 
//Confeccionar los métodos para la carga, otro para imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)
#include<iostream>

using namespace std;


class Empleado {
private:
		char nombre[40];
		double sueldo;
	
public:

	void carga();
	void imprimir();
	void mensaje();

};

void Empleado::carga() {
	cout << " Ingrese el nombre del empleado: "; cin.getline(nombre, 40);
	cout << "Cargue el sueldo : "; cin >> sueldo;
}

void Empleado::imprimir() {
	cout << "El sueldo del empleado " << nombre << " es de: " << sueldo;
}

void Empleado::mensaje(){
	if (sueldo > 3000) {
		cout << "Debes pagar el impuesto porque tu sueldo supera los 3000 ";
}
}


int main() {

	Empleado pepe;

	pepe.carga();
	pepe.imprimir();
	pepe.mensaje();

	

	return 0;
}