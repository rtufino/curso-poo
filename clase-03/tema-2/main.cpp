#include <iostream>
#include "caja.h"

using namespace std;

int main()
{
    Caja caja1(10, 10, 10);
    Caja caja2(3, 9, 8);

    caja1.mostrar();
    caja2.mostrar();

    if (caja1.comparar(caja2)){
        cout << "La caja 1 es más grande que la caja 2" << endl;
    }else{
        cout << "La caja 2 es más grande que la caja 1" << endl;
    }

    return 0;
}