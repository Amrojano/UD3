double media (double x1, double x2, double x3) { //Tipo, nombre y parametros de la funcion.
	//Codigo de la funcion.
	return (x1+x2+x3)/3.0;

}

#include <iostream>
using namespace std;

int main() {
	double d1, d2, d3; //Variables.

	cout <<"Introduce el primera nota: ";
	cin >> d1;
	cout <<"Introduce la segunda nota: ";
	cin >> d2;
	cout <<"Introduce la tercera nota: ";
	cin >> d3;

	cout << "Media = " << media(d1,d2,d3) << endl; // Salida con la funcion hecha previamente.
}
