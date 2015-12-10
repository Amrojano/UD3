//Vamos a realizar un programa donde vamos a calcular el MCD y el MCM de dos numeros enteros con una funcion y dos parametros.
#include <iostream>
using namespace std;

double mcm (int &n1, int &n2){
	int i;
	int maximo = n1;
    if ( n2 > maximo )
        maximo = n2;
    i = maximo;
    while ((i % n1 != 0) || (i % n2 != 0))
        i++;
	return i;
}

double mcd (int a, int b){
	int resto;
	
	while (resto != 0) 
		a = b;
		b = resto;
		resto = a%b;
	return resto;
}

int main() {
	int a, b;
	int resul1, resul2;
	cout << "Introduce un valor: ";
	cin >> a;
	cout << "Introduce un valor: ";
	cin >> b;
	resul1 = mcd(a, b);
	resul2 = mcm(a, b);
	cout << "El mcd es: " << resul1 << " y el mcm es: " << resul2 << endl;
	
}
