#include <iostream>
#include "Clase.h"
#include "ClasePrueba.cpp"

using namespace std;

int main(){

    Clase * a = new Clase("A");
    cout << a->getNombre() << endl;

    // ClasePrueba b{"B"};

    // cout << b.getNombre() << endl;

    delete a;
    // delete b;

    return 0;
}