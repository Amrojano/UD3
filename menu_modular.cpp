//Vamos a realizar un programa con modulos para hacer una calculadora con su menu.
#include <iostream>
using namespace std;
// Declaramos la siguiente funcion antes del MAIN.
void calculadora(char letra) {
	double valor1;
	double valor2;
	double suma, resta, multiplicacion, division; //Variable para el calculo del programa.
	switch (letra) {
	case 'S':
	case 's':
		cout << "Escogio la opcion suma" << endl;
		suma = valor1+valor2;
		cout << "La suma es: " << suma << endl;
		break;
	case 'R':
	case 'r':
		cout << "Escogio la opcion resta" << endl;
		resta = valor1-valor2;
		cout << "La resta es: " << resta << endl;
		break;
	case 'M':
	case 'm':
		cout << "Escogio la opcion multiplicacion" << endl;
		multiplicacion = valor1*valor2;
		cout << "La multiplicacion es: " << multiplicacion << endl;
		break;
	case 'D':
	case 'd':
		cout << "Escogio la opcion division" << endl;
		division = valor1/valor2;
		cout << "La division es: " << division << endl;
		break;
	}
}
//Declaramos el programa con MAIN.
int main() {
	char letra;	
	double valor1;
	double valor2;
		
	cout << "Introduzca primer valor: " << endl;
	cin >> valor1;
	cout << "Introduzca segundo valor: " << endl;
	cin >> valor2;
	cout << "Selecciona una opcion [S]uma/[R]esta/[M]ultiplicacion/[D]ivision" << endl;
	cin >> letra;
	calculadora (letra);
}
