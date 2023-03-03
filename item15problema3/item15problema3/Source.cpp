/*
Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
 Realizar un programa que muestre el curso que obtuvo el mayor promedio general.
*/

#include<iostream>

using namespace std;

class NotasParciales {
private:
	double cursoa [5];
	double cursob [5];
public:
	void cargarDatos();
	void promedioGeneral();
};

void NotasParciales::cargarDatos() {
	cout << " Ingresa los datos para el curso A: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> cursoa[i];
	}

	cout << " Ingresa los datos para el curso B: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> cursob[i];
	}

	promedioGeneral();

}

void NotasParciales::promedioGeneral() {
	double promedioA =0, promedioB=0;

	cout << "\n Calculando promedio para el curso A: ";
	for (int i = 0; i < 5; i++)
	{
		promedioA += cursoa[i];
	}
	promedioA = promedioA / 5;

	cout << "\n  Promedio A: " << promedioA;

	cout << "\n Calculando promedio para el curso B: ";
	for (int i = 0; i < 5; i++)
	{
		promedioB += cursob[i];
	}
	promedioB = promedioB / 5;
	cout << "\n  Promedio B: " << promedioB;

	if (promedioA > promedioB) {
		cout << " \n El curso con el mayor promedio es el A: " << promedioA;
	}
	else if (promedioB > promedioA) {
		cout << " \n El curso con el mayor promedio es el B: " << promedioB;

	}


}


int main() {
	NotasParciales np;

	np.cargarDatos();


}