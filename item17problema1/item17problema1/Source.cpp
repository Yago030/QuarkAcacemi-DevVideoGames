/*

    Cargar un vector de 5 elementos enteros. imprimir el menor y un mensaje si se repite dentro del vector.
*/

#include<iostream>

using namespace std;

class Vector {
private:
    int elementos[5];

public:
    void cargar();
    void revisarMenor();
};

void Vector::cargar() {
    cout << " Ingresa  los 5 elementos por favor: ";
  
    for (int i = 0; i < 5; i++)
    {
        cin >> elementos[i];
        
    }
    
    revisarMenor();



}

void Vector::revisarMenor() {
    int menor = elementos[0];
    int repite = 0;
    for (int i = 1; i < 5; i++)
    {
        if (menor > elementos[i]){
            menor = elementos[i];
        }
    }

    cout << "\n el menor es : " << menor << " \n";
    for (int i = 0; i < 5; i++)
    {
        if (menor == elementos[i]) {
            repite += 1;
       }
    }

    cout << "n\ EL NUMERO MENOR SE REPITE: " << repite << " veces";
}

int main() {

    Vector v;
    v.cargar();
}