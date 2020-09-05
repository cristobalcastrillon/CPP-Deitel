#include <iostream>
#include <string>
#include "Clase.h"

using namespace std;

Clase::Clase(string n){
    setNombre(n);
}

void Clase::setNombre(string n){
    this->nombre = n;
}

string Clase::getNombre(){
    return this->nombre;
}