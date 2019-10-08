#include <string>
#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

int calcularRandom();
void mostrarRandom(int aux);
int ingresarAcierto();
void inicializar(int vec[]);
int puntaje(int acierto, int random);
const int TOPE = 10;

int main()	{
	int vecRand[TOPE], vecAcierto[TOPE];
	inicializar(vecRand);
	for (int x = 0; x < TOPE; x++) {
		vecRand[x] = calcularRandom();
	}
	for (int i = 0; i < TOPE; i++) {
		mostrarRandom(vecRand[i]);
		vecAcierto[i] = ingresarAcierto();
  		puntaje(vecAcierto[i], vecRand[i]);
	}
	system("pause");
	return 0;
}

int calcularRandom() {
	srand(time(NULL));
	int aux;
	aux = rand() % 10;
	return 0;
}
void mostrarRandom(int aux) {
	cout << "El numero es: " << aux << endl;
}
int ingresarAcierto() {
	int aux;
	cout << "Ingrese numero: ";
	cin >> aux;
	return aux;
}
void inicializar(int vec[]) {
	for (int i = 0; i < TOPE; i++)
	{
		vec[i] = 0;
	}
}
int puntaje(int acierto, int random) {
	int aux=0;
	if (acierto = random) {
		aux++;
	}
	if(acierto!= random){
		cout << "Hubo un error en su jugada, su cantidad de aciertos fue de: " << aux << endl;
	}
	return aux;
}