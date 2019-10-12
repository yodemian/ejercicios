#include <string>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <sstream>
#include <Windows.h>
#include <cstdlib>
#include <random>

using namespace std;

int calcularRandom();
void mostrarRandom(string aux);
string ingresarAcierto();
void inicializar(int vec[]);
int calcPuntaje(string ingreso, string random[], int index, int puntajeActual);
void mostrarDerrota(int aux);
string int2string(int value);
void inicializarVecRand(std::string  vecRand[10]);
const int TOPE = 10;

int main() {
	int vecAcierto[TOPE], 
		random = 0, 
		puntajeActual = 0, 
		puntajeAnterior = 0, 
		segs=2000;
	string ingreso;
	string vecRand[TOPE];
	
	inicializarVecRand(vecRand);

	for (int i = 0; i < TOPE; i++) {
			mostrarRandom(vecRand[i]);
			if (puntajeActual == 5) {
				segs = segs - 1000;
			}
			Sleep(segs);
			system("cls");
			ingreso = ingresarAcierto();
			system("cls");
			puntajeActual = calcPuntaje(ingreso, vecRand, i, puntajeAnterior);
			if (puntajeAnterior == puntajeActual) {
				mostrarDerrota(puntajeActual);
				{break;}
			}
			else {
				puntajeAnterior = puntajeActual;
			}
	}
	if (puntajeActual == 10) {
		cout << "CAMPEON de..... STANKA dice...." << endl;
	}
	system("pause");
	return 0;
}

void inicializarVecRand(std::string  vecRand[10])
{
	for (int x = 0; x < TOPE; x++) {
		vecRand[x] = int2string(calcularRandom());
	}
}

string int2string(int value) {
	std::stringstream ss;
	ss << value;

	return ss.str();
}

int calcularRandom() {
	std::random_device rd;
	std::mt19937 eng(rd());
	std::uniform_int_distribution<> distr(0,9);
	
	return distr(eng);
}
void mostrarDerrota(int aux) {
	cout << "Ha perdido, su cantidad de aciertos fue de: " << aux << endl;
}
void mostrarRandom(string aux) {
	cout << "El numero es: " << aux << endl;
}
string ingresarAcierto() {
	string aux;
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
int calcPuntaje(string ingreso, string random[], int index, int puntajeActual) {
	int puntajeLocal = puntajeActual;

	if (ingreso.length() != index + 1) {
		//ERROR: El tamano del ingreso es diferente del tamano del valor actual
		return puntajeLocal;
	}

	for(int i = 0; i <= index; i++)
	{
		string aux(1, ingreso[i]);

		if (aux != random[i]) {
			return puntajeLocal;
		}
	}
	puntajeLocal++;
	return puntajeLocal;
}