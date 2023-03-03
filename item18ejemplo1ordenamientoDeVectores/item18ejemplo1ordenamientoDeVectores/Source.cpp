#include<iostream>

using namespace std;

class OrdenamientoSueldos {
private :
	int sueldos[5];

public :

	void cargar();
	void ordenar();
	void imprimir();
};

void OrdenamientoSueldos::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese el sueldo:";   cin >> sueldos[f];
    }
}

void OrdenamientoSueldos::ordenar()
{
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (sueldos[f] > sueldos[f + 1])
            {
                int aux;
                aux = sueldos[f];
                sueldos[f] = sueldos[f + 1];
                sueldos[f + 1] = aux;
            }
        }
    }
}


void OrdenamientoSueldos::imprimir()
{
    cout << "Sueldos ordenados de menor a mayor.";
    cout << "\n";
    for (int f = 0; f < 5; f++)
    {
        cout << sueldos[f];
        cout << "\n";
    }
    cin.get();
    cin.get();
}

int main()
{
    OrdenamientoSueldos os;
    os.cargar();
    os.ordenar();
    os.imprimir();
    return 0;
}