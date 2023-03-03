//Plantear una clase que permita cargar un valor entero por teclado. Definir un método que solicite la carga del entero
//y llame a otro método al que le pasamos el valor ingresado y proceda a mostrar los valores enteros desde el 1 hasta el valor que llega como parámetro (es decir el ingresado por teclado)

#include<iostream>

using namespace std;

class MostrarHasta {
private:
    void mostrarEnteros(int valor);
public:
    void cargar();
};

void MostrarHasta::mostrarEnteros(int valor)
{
    for (int f = 1; f <= valor; f++)
    {
        cout << f;
        cout << "-";
    }
}

void MostrarHasta::cargar()
{
    int val;
    cout << "Ingresar un valor entero:";
    cin >> val;
    mostrarEnteros(val);

}

int main()
{
    MostrarHasta mostrarHasta1;


    mostrarHasta1.cargar();
    return 0;
}