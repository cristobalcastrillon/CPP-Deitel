#include <string>

using namespace std;

class Persona{
    public: 
        Persona(string); //Constructor that initializes 'nombre'
        void setNombre(string); //Setter for 'nombre'
        string getNombre(); //Getter for 'nombre'
    private:
        string nombre;
}; //Class definition ends with a ';'.