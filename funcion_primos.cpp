#include <iostream>
#include <cmath>
using namespace std; 
	//Inicio declaracion de funciones.
int LeerIntPositivo() {
	int valor;
	cout << "Introduzca entero positivo: ";
	cin >> valor;
	while (valor<1) {
		cout << "El valor no es positivo. Introduzca otro: ";
		cin >> valor;
	}
	return valor;
}

int EsPrimo (int n) { //Tipo, nombre y parametros de la funcion.
	int i; //Variables locales.
	int raiz = sqrt (n);
	bool esprimo = true;
	//Codigo de la funcion.
	for (i = 2; i <= raiz && esprimo; i++) { //Estructura del bucle "for". 
		if (n%i==0) 	//Condicion si el resto es igual a cero.	
		esprimo = false;
	}
	return esprimo;
}
void Pausa() {
	char tecla;
	cout <<"Pulsa una tecla para continuar: ";
	cin >> tecla;
} //Fin de declaracion de las funciones.
int main() {
	int n;
	n= LeerIntPositivo ();
	
	for (int numero=2; numero<=n; numero++)
		if (EsPrimo(numero))
	cout << numero << endl;
	Pausa();
}

