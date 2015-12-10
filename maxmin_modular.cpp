//Vamos a realizar un programa donde vamos a calcular el maximo y el minimo de una secuencia de numeros (10).
#include <iostream>
using namespace std;

int maxmin (int max=0, int min=0) {
	int i, numero;

	for (i =1; i <= 10; i++) { //Estructura del bucle "for". 

		if (numero>max)
			max=numero;
		if (numero<min)
			min=numero;
		return numero;
	}
}
int main() {
	 int numero, resul; //Variables.
	int max, min;
	
		cout << "Introduce un valor: ";
		cin >> numero;		
	cout << "El numero maximo es el " << max << "y el numero minimo es el " << min << endl;
}
