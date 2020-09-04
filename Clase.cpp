#include <iostream>
#include <string>
#include "Clase.h"

using namespace std;

Clase::Clase(const string n){
    setNombre(n);
}

void Clase::setNombre(string n){
    nombre = n;
}

string Clase::getNombre(){
    return nombre;
}