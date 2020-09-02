#include <string>
#include "Persona_Interface.h"

using namespace std;

//Constructor Persona(string) uses setNombre(string).
Persona::Persona(string nombre){
    setNombre(nombre);
}

//Void setter: setNombre(string).
void Persona::setNombre(string nombre){
    Persona::nombre = nombre;
}

//getter: getNombre(); returns a string 'nombre'.
string Persona::getNombre(){
    return Persona::nombre;
}
