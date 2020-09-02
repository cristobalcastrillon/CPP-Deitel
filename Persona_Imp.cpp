#include <string>
#include "Persona_Interface.h"

using namespace std;

//Constructor Persona(string) uses setNombre(string).
// 'nombreP': Nombre para el prototipo.
Persona::Persona(string nombreP){
    setNombre(nombreP);
}

//Void setter: setNombre(string).
void Persona::setNombre(string nombreP){
    nombre = nombreP;
}

//getter: getNombre(); returns a string 'nombre'.
string Persona::getNombre(){
    return nombre;
}
