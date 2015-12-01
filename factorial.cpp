//Ejemplo de ejercicio de funciones, vamos a hacer un programa con funciones para calcular un factorial.

int Factorial (int n) {
	//Variables locales.	
	int i;
	int acu=1;
	//Condiciones de la funcion.
	for (i=2; i<=n; i++)
		acu=acu*i; //Calculo de factorial.

	return acu;

}

#include <iostream>
using namespace std;

int main (){
	//Variables.
	int dato; //Variable que va a introducir el usuario.
	int valor; //Variable del resultado del calculo de la funcion (FActorial) con el dato introducido por el usuario.

	cout << "Introduce un valor positivo: ";
	cin >> dato;

	valor = Factorial(dato); //Llamada a funcion.

	cout << "El factorial de " << dato << " es " << valor << endl; 
}
