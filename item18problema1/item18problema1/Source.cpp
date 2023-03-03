/*
    Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.
*/

#include<iostream>

using namespace std;

class Ordenado {
private:
    int elementos[5];

public :
    void cargarDatos();
    void ordenarDatos();
    void ordenarMenorAmayor();
    void imprimirDatos();
   
};

void Ordenado::cargarDatos() {
    for (int  i = 0; i < 5; i++)
    {
        cout << "\n Cargar Datos de elementos desordenados: "; cin >> elementos[i];
    }
   
}

void Ordenado::ordenarDatos() {
    cout << " \n Ordanando de Mayor  a menor: \n";

    for (int i = 0; i < 5; i++)
    {
        for (int f = 0; f < 5-i; f++)
        {
            if (elementos[f] < elementos[f + 1]) {
                int aux;
                aux= elementos[f];
                elementos[f] = elementos[f+1];
                elementos[f + 1] = aux;
            }
        }
    }
}

void Ordenado::ordenarMenorAmayor() {
    cout << " \n Ordanando de Menor a Mayor: \n";
    for (int i = 0; i < 5; i++)
    {
        for (int f = 0; f < 5-i; f++)
        {
            int aux = 0;
            if (elementos[f] > elementos[f +1]) {
                aux = elementos[f];
                elementos[f] = elementos[f + 1];
                elementos[f + 1] = aux;
            }
        }
    }
}

void Ordenado::imprimirDatos() {
    cout << "\n ************  Impriemiento datos ordenados: **************";
    for (int i = 0; i < 5; i++)
    {
        cout << elementos[i]<<" -";
    }
}




int main() {

    Ordenado o1;

    o1.cargarDatos();
    o1.ordenarDatos();
    o1.imprimirDatos();
    o1.ordenarMenorAmayor();
    o1.imprimirDatos();

    return 0;
}