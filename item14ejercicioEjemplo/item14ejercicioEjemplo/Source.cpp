#include<iostream>

using namespace std;

class MayorMenor {
private:
    int calcularMayor(int v1, int v2, int v3);
    int calcularMenor(int v1, int v2, int v3);
public:
    void cargarValores();
};

int MayorMenor::calcularMayor(int v1, int v2, int v3)
{
    int m;
    if (v1 > v2 && v1 > v3)
    {
        m = v1;
    }
    else
    {
        if (v2 > v3)
        {
            m = v2;
        }
        else
        {
            m = v3;
        }
    }
    return m;
}

int MayorMenor::calcularMenor(int v1, int v2, int v3)
{
    int m;
    if (v1 < v2 && v1 < v3)
    {
        m = v1;
    }
    else
    {
        if (v2 < v3)
        {
            m = v2;
        }
        else
        {
            m = v3;
        }
    }
    return m;
}

void MayorMenor::cargarValores()
{
    int valor1, valor2, valor3;
    cout << "Ingrese primer valor:";
    cin >> valor1;
    cout << "Ingrese segundo valor:";
    cin >> valor2;
    cout << "Ingrese tercer valor:";
    cin >> valor3;
    int mayor, menor;
    mayor = calcularMayor(valor1, valor2, valor3);
    menor = calcularMenor(valor1, valor2, valor3);
    cout << "El valor mayor de los tres es:";
    cout << mayor;
    cout << "\n";
    cout << "El valor menor de los tres es:";
    cout << menor;
    cin.get();
    cin.get();
}

int main()
{
    MayorMenor mayormenor1;
    mayormenor1.cargarValores();
    return 0;
}