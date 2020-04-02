#include <iostream>
#include "caja.h"

using namespace std;

// Inicializar el miembro estático de Caja.
int Caja::numeroCajas = 0;

int main()
{
    Caja caja1(10, 5, 5);
    const Caja caja2(10, 5, 10);

    cout << "Total de cajas creadas: " << Caja::numeroCajas << endl;

    double v1 = caja1.volumen();
    double v2 = caja2.volumen();    // error
    
    return 0;
}