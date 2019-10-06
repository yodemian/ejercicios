/*1. Ingresar 10 números en un vector. Obtener y mostrar utilizando funciones:
a) El valor máximo  OBTENER_MAX ( )
b) El promedio del vector  PROMEDIO_VEC ( )
c) Un listado con los números que se encuentran en posiciones pares. 
MOSTRAR_POS_PARES ( )*/
#include <iostream>

using namespace std;
const int TOPE = 10;
int ingresarNumero();
int OBTENER_MAX(int vecNum[]);
void inicializar(int vec[]);

int main(){
    int vecNum[TOPE], max = 0, numero=0;
    inicializar(vecNum);
    for(int i = 0; i < TOPE; i++){
        vecNum[i] = ingresarNumero();     
    }
    max = OBTENER_MAX(vecNum);
    cout << "El valor maximo del vector es: " << max << endl;
    return 0;
}
int OBTENER_MAX(int vecNum[]){
    int aux = 0;
    int max = 0;
    for(int x = 0; x < TOPE; x++){
        aux = vecNum[x];
        if(aux > max){
            max = aux;
        }
    }
    return max;
}
int ingresarNumero(){
    int aux;
    cout << "Ingrese un numero: ";
    cin >> aux;
    return aux;
}
void inicializar(int vec[]) {
	for (int i = 0; i < TOPE; i++)
	{
		vec[i] = 0;
	}
}