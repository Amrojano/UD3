//Vamos a realizar un programa con modulos par calcular el intercambio de dos variables.
#include <iostream>
using namespace std;
// Declaramos la siguiente funcion antes del MAIN.
void Intercambio(int &c1, int &c2) {
	int aux = c1;
	c1=c2;
	c2=aux;
}
//Declaramos el programa con MAIN.
int main() {
	int a = 3, b = 4;

	Intercambio(a, b);

	cout << "a = " << a << " y b = " << b << endl;
}
