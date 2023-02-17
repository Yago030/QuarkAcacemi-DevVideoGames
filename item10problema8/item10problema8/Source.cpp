//Se cuenta con la siguiente informaci�n:
//Las edades de 5 estudiantes del turno ma�ana.
//Las edades de 6 estudiantes del turno tarde.
//Las edades de 11 estudiantes del turno noche.
//Las edades de cada estudiante deben ingresarse por teclado.
//a) Obtener el promedio de las edades de cada turno(tres promedios)
//b) Imprimir dichos promedios(promedio de cada turno)
//c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor.

#include<iostream>

using namespace std;

int main() {

	double promedioMa�ana = 0, promedioTarde = 0, promedioNoche = 0, valor;


	cout << "\n -------------- TURNO MA�ANA -------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Alumno " << i + 1 << " -- Ingrese la edad ---> "; cin >> valor;
		promedioMa�ana += valor;
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


	if (promedioMa�ana > promedioTarde && promedioMa�ana > promedioNoche) {
		cout << " El promedio de edades es mayor en el turno MA�ANA ";
	}
	else if (promedioTarde > promedioMa�ana && promedioTarde > promedioNoche) {
		cout << " El promedio de edades es mayor en el turno TARDE ";
	}
	else if (promedioNoche > promedioMa�ana && promedioNoche > promedioTarde) {
	
		cout << " El promedio de edades es mayor en el turno NOCHE ";
	}
	else {

		cout << " El promedio de edades son iguales, magicamente, en los 3 turnos ";
	}


	cout << "\n ***************** PROMEDIOS DE EDADES SEGUN LOS TURNOS ******************"<< endl;

	cout << "Turno ma�ana ->> " << promedioMa�ana /   5 <<" A�os "<<endl;
	cout << "Turno tarde  ->> " << promedioMa�ana /6 << " A�os " << endl;
	cout << "Turno noche ->> " << promedioMa�ana / 11<< " A�os " << endl;




	return 0;
}