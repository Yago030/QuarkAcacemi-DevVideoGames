/*
Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.
*/
#include<iostream>
using namespace std;
class MayorMenor {
private:
	int ordenado[10];
public:
	void cargar();
	void revisor();
};
void MayorMenor::cargar() {
	cout << " Carga los 10 elementos por favor:  \n";
	for (int i = 0; i < 10; i++)
	{
		cin >> ordenado[i];
	}

	revisor();
}
void MayorMenor::revisor(){

	bool flag;

	for (int i = 0; i < 10; i++)
	{
		while (i >= 1) {
			if (ordenado[i]> ordenado[i-1])
			{
				flag = true;
				break;
			}
			else {
				flag = false;
				break;
			}
		}
	}
	if (flag) {
		cout << "Esta ordenado de menor a mayor: ";
	}
	else {
		cout << "No esta ordenado de menor a mayor;";
	}

}

int main() {
	MayorMenor m;
	m.cargar();

}


