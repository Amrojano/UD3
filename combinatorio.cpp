#include <iostream>
using namespace std;
	//Inicio declaracion de funciones.
int Factorial (int n) { //Tipo, nombre y parametros de la funcion.
	int i, valor=1; //Variables locales.
	//Codigo de la funcion.
	for (i=2; i<=n; i++)
		valor=valor*i;
	return valor;
}
int Combinatorio (int a, int b) { //Tipo, nombre y parametros de la funcion.
	return Factorial(a)/(Factorial(b)*Factorial(a-b)); //Codigo de la funcion.
}
void ImprimeFactorial (int n){
	cout << "\nEl factorial de "<< n <<" es " << Factorial(n) << endl;
}
void Pausa() {
	char tecla;
	cout <<"Pulsa una tecla para continuar: ";
	cin >> tecla;
} //Fin de declaracion de las funciones.
int main() {
	int valor;
	cout << "\nIntroduce un entero positivo: ";
	cin >> valor;

	ImprimeFactorial (valor);
	Pausa();
	cout << "\nCombinatorio: "<< valor << " sobre 2 es "<< Combinatorio(valor,2) << endl;
}

