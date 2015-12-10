//Vamos a realizar un programa donde vamos a calcular el MCD y el MCM de dos numeros enteros con una funcion y dos parametros.
#include <iostream>
using namespace std;

double mcd (int &a, int &b){
	int resto;
	
	while (resto != 0) 
		a = b;
		b = resto;
		resto = a%b;
	return resto;
}

int main() {
	int a, b;
	int resul, resto;
	cout << "\nIntroduce un valor: ";
	cin >> a;
	cout << "\nIntroduce un valor: ";
	cin >> b;
	resul = mcd(a, b);
	cout << "\nEl mcd es: " << resul << endl;
	
}
