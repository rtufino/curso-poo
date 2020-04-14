/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 14-04-2020
 * 
 * Ejemplo de herencia
 */
#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}

    string informacion()
    {
        return "Nombre: " + nombre + "\nEdad: " + to_string(edad);
    }
};

class Profesor : Persona
{
private:
    double salario;

public:
    Profesor(string nombre, int edad, double salario) : Persona(nombre, edad), salario(salario) {}
    string informacion()
    {
        return Persona::informacion() + "\nSalario: " + to_string(this->salario) + "\n";
    }
};

class Estudiante : Persona
{
private:
    int creditos;

public:
    Estudiante(string nombre, int edad, int creditos) : Persona(nombre, edad), creditos(creditos) {}
    string informacion()
    {
        return Persona::informacion() + "\ncreditos: " + to_string(this->creditos) + "\n";
    }
};

int main()
{
    Persona objA("Juan", 25);
    Profesor objB("Pedro", 35, 1500);
    Estudiante objC("Maria", 19, 32);

    cout << objA.informacion() + "\n" << endl;
    cout << objB.informacion() << endl;
    cout << objC.informacion() << endl;

    return 0;
}