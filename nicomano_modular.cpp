//Programa para calcular con la manera de Nicómano, con modulos.
#include <iostream>
using namespace std;

int nicomano (int cubo){
	int impar_actual;
	int x;
	for(int i = 1; i < x; i++){
        impar_actual = impar_actual + 2;
        cubo = cubo + impar_actual;
	return cubo;
	}
}

void Imprimecubo (int x) {
	int resul;
	int impar_actual, cubo;
	resul = nicomano(x);
	cout << impar_actual;
	cout <<  " + " << impar_actual; 
        cout << " = " << cubo << endl;
	cout << "El cubo de " << x << " = ";
	
}

int main(){
    int x = 0; //número al que quiero calcularle el cubo
    int cubo = 0; // variable que contiene el resultado del cubo de x
    int impar_actual = 0; //impar actual que hay que sumar
    
    cout << "Introduce el número del que quieres calcular su cubo: ";
    cin >> x;
    impar_actual = ((x - 1) * x + 1); //fórmula que me indica el impar por el que empezar
    cubo = impar_actual;
    Imprimecubo(cubo);

}
