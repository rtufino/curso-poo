#include <iostream>
#include "estudiante.h"

using namespace std;

int main()
{

    Vista *vista = new Vista();

    cout << "= = REGISTRO DE NOTAS = =" << endl;
    
    int opc;
    do
    {
        cout << "\n+ + MENU PRINCIPAL + +" << endl;
        cout << "1. Mostrar datos" << endl;
        cout << "2. Actualizar nota" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            vista->imprimir();
            break;
        case 2:
            vista->actualizarNota();
            break;
        default:
            cout << "Opción no válida!" << endl;
            break;
        }
    } while (opc != 3);
    cout << "Fin del programa...";
    return 0;
}