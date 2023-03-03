//Plantear una clase que permita cargar un valor entero por teclado.Definir un método que solicite la carga del entero y llame a otro método al que le pasamos el valor ingresado y
//proceda a mostrar los valores enteros desde el 1 hasta el valor que llega como parámetro(es decir el ingresado por teclado)


#include <iostream>

using namespace std;

class Multiplicador {

private: 
	void  mostrar( int valor); // defino el metodo que va a hacer la operacion como el uso del for y con el COUT

public :
	void  cargar(); //ESTE metood LE PASA EL VALOR AL METODO ANTERIOR Y LO LLAMA, 


};

void Multiplicador::mostrar(int valor)
{
	for (int f = 1; f <= valor; f++)
	{
		cout << "NUM --> " << f << endl;
	}
}


void Multiplicador::cargar()
{
	int val;
	cout << "Ingresar un valor entero:"; cin >> val;
	mostrar(val);
}


int main() {
	Multiplicador calcu;
	
	calcu.cargar();


	return 0;
}