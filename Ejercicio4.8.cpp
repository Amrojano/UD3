// Programa que al introducir los segundos, nos calcule los minutos, las horas y los dias.
#include <iostream>
using namespace std;
int reloj (int s) {
	int segundos, minutos, horas, dias;
	dias = s/86400;
	segundos = s%86400;
	horas = s/3600;
	segundos = s%3600;
	minutos = s/60;
	segundos = s%60;

	cout << "Al transformar los segundos nos sale: " << dias << " dias, " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos " << endl;	
}
int main() {
	int s;
	int segundos, minutos, horas, dias;
	cout << "Introduzca en numero de segundos: ";
	cin >> s;
	reloj(s);
	
}
