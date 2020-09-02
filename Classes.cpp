#include <iostream>
#include "Persona_Interface.h"

using namespace std;

//Client code (Main function)
int main(){
    Persona a("Cristobal");

    cout << a.getNombre() << endl;
    return 0;
}