#include <iostream>
#include <string>
#include "Clase.h"

using namespace std;

Clase::Clase(string n){
    setNombre(n);
}

Clase::setNombre(string n){
    nombre = n;
}

Clase::getNombre(){
    return nombre;
}