#include <iostream>
#include <string>

using namespace std;

class Clase{
    public:
        Clase(string n);
        
        //setters:
        void setNombre(string n);

        //getters:
        string getNombre();

    private:
        string nombre;
};