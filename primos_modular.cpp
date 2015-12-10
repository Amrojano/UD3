//Vamos a realizar un programa con modulos para calcular numeros primos.
#include <iostream>
using namespace std;
// Declaramos la siguiente funcion antes del MAIN.
void esprimo(int &n) {
	int i, divisor; //Variable para el calculo del programa.
	divisor = 0;

	for (i = 1; i <= n; i++) { //Estructura del bucle "for". 
		if (n%i==0) {	//Condicion si el resto es igual a cero.	
		divisor = divisor + 1;
		}
	}
	if (divisor == 2) {
		cout << "El numero es primo" << endl; //Salida por pantalla del programa.
	}
	else cout << "El numero no es primo" << endl;
}
//Declaramos el programa con MAIN.
int main() {
	int n;
	cout << "Introduce el numero: " << endl;
	cin >> n;
	esprimo (n);
}
