#include <iostream>
#include <string>

using namespace std;

class Clase{
    public:
        Clase(string);
        
        //setters:
        void setNombre(string);

        //getters:
        string getNombre();

    private:
        string nombre;
};