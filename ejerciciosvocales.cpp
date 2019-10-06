#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

string ingresarPalabra();

int main(){
    string palabra;
    palabra = ingresarPalabra();
    return 0;
}

string ingresarPalabra(){
    string aux;
    cout << "Ingrese una palabra: ";
    cin >> aux;
    return aux;
}
bool calcularvocales(string palabra){
    for(int x = 0; x < 5; x++){

    }
}