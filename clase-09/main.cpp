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
        cout << "3. Aprueba" << endl;
        cout << "4. Ayudar" << endl;
        cout << "5. Salir" << endl;
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
        case 3:
            vista->estaAprobado();
            break;
        case 4:
            vista->ayudar();
            break;
        case 5:
            cout << "\nFin del programa..." << endl;
            break;
        default:
            cout << "\nOpción no válida!" << endl;
            break;
        }
    } while (opc != 5);
 
    return 0;
}