/*

En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.
*/

#include<iostream>

using namespace std;

class Escuela {
private:
	char nombreAlumno[4][40];
	double notaAlumno[4];
	string condicionAlumno[4];

public:
	void  cargar();
	void listar();
};

void Escuela::cargar(){
	cout << "Ingresar Nombre y nota del alumno: \n";
	int muybuenos = 0;
	for (int  i = 0; i < 4; i++)
	{
		cout << "\n Ingresar nombre del alumno: "; cin.getline( nombreAlumno[i],50);
		cout << "\n Ingresar Nota del alumno: "; cin >> notaAlumno[i];
		if (notaAlumno[i] >= 8) {
			condicionAlumno[i] = "Muy bueno";
			muybuenos+= 1;
		}
		else if (notaAlumno[i] < 8 && notaAlumno[i] >= 4) {
			condicionAlumno[i] = "Bueno ";
		}
		else {
			condicionAlumno[i] = "Insuficiente ";
		}

	}

	listar();

	cout << "\n Cantidad de alumnos con resultados de condiciones MUY BUENO:   " << muybuenos << " \n";


}

void Escuela::listar() {

	cout << "\n ********** Listado  de alumnos , NOTAS , CONDICION **************   \n";

	for (int i = 0; i < 4; i++)
	{
		cout << " \n ALUMNO: " << nombreAlumno[i] << "    | Nota: " << notaAlumno[i] << "   | Condicion  -------> " << condicionAlumno[i]<< " \n";


	}

	
}

int main() {
	Escuela e;
	e.cargar();
}