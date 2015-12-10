//Vamos a realizar un programa con modulos para calcular ecuaciones de segundo grado.
#include <iostream>
#include <cmath>
using namespace std;
// Declaramos la siguiente funcion antes del MAIN.
void ecuacion(double &x1, double &x2) {
	double a, b, c;
	if (a != 0) {
	x1 = (-b + sqrt ( pow(b,2)-4*a*c) ) / (2*a);
	x2 = (-b - sqrt ( pow(b,2)-4*a*c) ) / (2*a);
		
	}
	else // Alternativa de la condicion if.
	//Salida.
	cout << "Solo una raiz: " << -c/b << endl;
	cout << "Las raices son: " << a << " y " << b << endl;
}
//Declaramos el programa con MAIN.
int main() {
	double a, b, c;
	
	cout << "\nIntroduce coeficiente de 2º grado: ";
	cin >> a;
	cout << "\nIntroduce coeficiente del 1er grado: ";
	cin >> b;
	cout << "\nIntroduce coeficiente independiente: ";
	cin >> c;
	ecuacion(a, b);
	
	
}
