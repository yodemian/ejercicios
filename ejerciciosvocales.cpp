#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;

string ingresarPalabra();
bool calcularVocales(string palabra, int longitud);

int main(){
    string palabra;
    int longitud=0;
    bool a;
    palabra = ingresarPalabra();

    a = calcularVocales(palabra, palabra.length());
    cout << a << endl;
    return 0;
}

string ingresarPalabra(){
    string palabra;
    cout<<"Ingrese una palabra: "; 
    cin >> palabra;

    return palabra;
}
bool calcularVocales(string palabra, int longitud){
    
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
    bool resVocales[5] = {false, false, false, false, false};

    for(int x = 0; x < 5; x++){

        for(int y = 0; y < longitud; y++){
            if ( palabra[y] == vocales[x] ){
                resVocales[x] = true;
            }        
        }      
    }

    for(int x = 0; x < 5; x++){
        if(resVocales[x] == false){
            return false;
        }
    }

    return true;
}