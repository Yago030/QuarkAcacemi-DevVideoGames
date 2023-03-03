/*

Una empresa tiene dos turnos (ma�ana y tarde) en los que trabajan 8 empleados (4 por la ma�ana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
Imprimir los gastos en sueldos de cada turn
*/

#include<iostream>

using namespace std;

class PruebaVector {
private:
	float turnoMa�ana[4];
	float turnoTarde[4];

public:
	void cargar();
	void calcularGastos();
};

void PruebaVector::cargar() {
	cout << "Ingrese los sueldos para el primer turno ma�an:_ ";
	cout << "\n";

	for (int i = 0; i < 4; i++)
	{
		cout << "ingrese sueldo: "; cin >> turnoMa�ana[i];
	}

	cout << "\n Ingrese los sueldos para el primer turno ma�an:_ ";
	cout << "\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "ingrese sueldo: "; cin >>	turnoTarde[i];
	}

	calcularGastos(); //lo llamo de aca para ahorrar tiempo

}

void PruebaVector::calcularGastos() {

	float manana = 0, tarde = 0;

	for (int i = 0; i < 4; i++)
	{
		manana += turnoMa�ana[i];
		tarde += turnoTarde[i];
	}

	cout << "\n Gastos turno ma�ana: " << manana;
	cout << "\n Gastos turno Trde: " << tarde;

}

int main() {
	PruebaVector v1;
	v1.cargar();
	return 0;
}