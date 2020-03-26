/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 26-03-2020
 * 
 * Utilización de Constructores en C++
 */

#include <iostream>

using namespace std;

class MiClase
{
public:
    MiClase()
    {
        cout << "Constructor de mi clase\n";
    }
};

int main()
{
    MiClase miObjeto;
    return 0;
}