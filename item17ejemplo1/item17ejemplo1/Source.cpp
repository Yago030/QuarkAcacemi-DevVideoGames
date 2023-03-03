//Confeccionar un programa que permita cargar los nombres de 5 operarios y sus sueldos respectivos.Mostrar el sueldo mayor y el nombre del operario.

#include<iostream>

using namespace std;

class SueldoOperarios {
private:
	char nombres[5][40];
	float sueldos[5];

public:
	void cargar();
	void mayorSueldo();

};

void SueldoOperarios::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese el nombre del empleado:";  cin.getline(nombres[f], 40);
       
        cout << "Ingrese el sueldo:";    cin >> sueldos[f];
     
        cin.get();
    }
}

void SueldoOperarios::mayorSueldo()
{
    float mayor;
    int pos;
    mayor = sueldos[0];
    pos = 0;
    for (int f = 1; f < 5; f++)
    {
        if (sueldos[f] > mayor)
        {
            mayor = sueldos[f];
            pos = f;
        }
    }
    cout << "El empleado con sueldo mayor es ";
    cout << nombres[pos];
    cout << "\n";
    cout << "Tiene un sueldo:";
    cout << mayor;
    cin.get();
}