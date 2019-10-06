#include <iostream>
using namespace std;

//Comentarios boludos de mi papá
int ingresarAlumno();
int ingresarNota();
void inicializar(int vec[]);
void mostrarProm(int vecN[], int verC[]);

const int TOPE = 3;

int main (){
    int alumno = 0, nota = 0;
    int vecNota[TOPE];
	int vecCant[TOPE];
    inicializar(vecNota);
	inicializar(vecCant);
    alumno = ingresarAlumno();
    while( alumno != 0 && alumno <= TOPE){
        nota = ingresarNota();
        vecNota[alumno - 1] += nota;
        vecCant[alumno - 1] ++;
        alumno = ingresarAlumno();
    }       
    mostrarProm(vecNota, vecCant);
    return 0;
}

int ingresarAlumno(){
    int aux;
    cout << "Ingrese numero del alumno: ";
    cin >> aux;
    return aux;
}
int ingresarNota(){
    int aux;
    cout << "Ingrese nota del alumno: ";
    cin >> aux;
    return aux;
}
void inicializar(int vec[]) {
	for (int x = 0; x < TOPE; x++)
	{
		vec[x] = 0;
	}
}
void mostrarProm(int vecN[], int vecC[]){
    float prom;
    for (int x = 0; x < TOPE; x++){
        if(vecC[x]==0){
            prom = 0;
        }
        else{
            prom = (vecN[x] / vecC[x]);       
        }
        cout << "El alumno: " << x + 1 << " tiene promedio: " << prom << endl;
    }
}