#include <iostream>

using namespace std;

class ClasePrueba{
    public:
    ClasePrueba(string nombre){
        setNombre(nombre);
    }
    string getNombre(){
        return nombre;
    }
    void setNombre(string nom){
        nombre = nom;
    }
    private:
    string nombre;
};