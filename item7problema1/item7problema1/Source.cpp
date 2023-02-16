#include<iostream>

using namespace std;

int main() {
	int num1, num2, num3;

	

	cout << "ingrese un numero  :  ";
	cin >> num1;
	cout << "ingrese un numero  :  ";
	cin >> num2;
	cout << "ingrese un numero  :  ";
	cin >> num3;

	if (num1 > num2 && num1 > num3) {
		cout << "Numero uno es mayor ! ";
	}else
		if (num2 > num1 && num2 > num3) {
		cout << " Numero 2 es mayor ! ";
		}
		else {
			cout << "numero 3 es mayor !";
		}

	


	return 0;
}