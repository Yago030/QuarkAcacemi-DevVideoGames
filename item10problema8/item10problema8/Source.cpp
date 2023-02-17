//Se cuenta con la siguiente información:
//Las edades de 5 estudiantes del turno mañana.
//Las edades de 6 estudiantes del turno tarde.
//Las edades de 11 estudiantes del turno noche.
//Las edades de cada estudiante deben ingresarse por teclado.
//a) Obtener el promedio de las edades de cada turno(tres promedios)
//b) Imprimir dichos promedios(promedio de cada turno)
//c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor.

#include<iostream>

using namespace std;

int main() {

	double promedioMañana = 0, promedioTarde = 0, promedioNoche = 0, valor;


	cout << "\n -------------- TURNO MAÑANA -------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Alumno " << i + 1 << " -- Ingrese la edad ---> "; cin >> valor;
		promedioMañana += valor;
	}


	cout << "\n -------------- TURNO TARDE -------------" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Alumno " << i + 1 << " -- Ingrese la edad ---> "; cin >> valor;
		promedioTarde += valor;
	}


	cout << "\n -------------- TURNO NOCHE -------------" << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << "Alumno " << i + 1 << " -- Ingrese la edad ---> "; cin >> valor;
		promedioNoche += valor;
	}


	if (promedioMañana > promedioTarde && promedioMañana > promedioNoche) {
		cout << " El promedio de edades es mayor en el turno MAÑANA ";
	}
	else if (promedioTarde > promedioMañana && promedioTarde > promedioNoche) {
		cout << " El promedio de edades es mayor en el turno TARDE ";
	}
	else if (promedioNoche > promedioMañana && promedioNoche > promedioTarde) {
	
		cout << " El promedio de edades es mayor en el turno NOCHE ";
	}
	else {

		cout << " El promedio de edades son iguales, magicamente, en los 3 turnos ";
	}


	cout << "\n ***************** PROMEDIOS DE EDADES SEGUN LOS TURNOS ******************"<< endl;

	cout << "Turno mañana ->> " << promedioMañana /   5 <<" Años "<<endl;
	cout << "Turno tarde  ->> " << promedioMañana /6 << " Años " << endl;
	cout << "Turno noche ->> " << promedioMañana / 11<< " Años " << endl;




	return 0;
}