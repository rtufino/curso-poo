
#include <iostream>
#include "estudiante.h"

using namespace std;

Estudiante::Estudiante()
{
    this->nombre = "\0";
    this->nota1 = 0;
    this->nota2 = 0;
    this->nota3 = 0;
}

Estudiante::Estudiante(string nom, int n1, int n2, int n3)
{
    this->nombre = nom;
    this->nota1 = n1;
    this->nota2 = n2;
    this->nota3 = n3;
}

Estudiante::~Estudiante()
{
}

void Estudiante::setNota1(int valor)
{
    this->nota1 = valor;
}

void Estudiante::setNota2(int valor)
{
    this->nota2 = valor;
}

void Estudiante::setNota3(int valor)
{
    this->nota3 = valor;
}

int Estudiante::getNota1()
{
    return this->nota1;
}
int Estudiante::getNota2()
{
    return this->nota2;
}
int Estudiante::getNota3()
{
    return this->nota3;
}

string Estudiante::getDatos()
{
    return "\nNombre: " + this->nombre + "\n" +
           "Nota 1: " + to_string(this->nota1) + "\n" +
           "Nota 2: " + to_string(this->nota2) + "\n" +
           "Nota 3: " + to_string(this->nota3) + "\n";
}

Controlador::Controlador()
{
    this->cargarBaseDatos();
}

Controlador::~Controlador() {}

void Controlador::cargarBaseDatos()
{
    this->modelo = new Estudiante("Ariel", 5, 7, 9);
}

float Controlador::promedio()
{
    return this->modelo->getNota1() + this->modelo->getNota2() + this->modelo->getNota3() / 3;
}

void Controlador::actualizarNota(int nota, int valor)
{
    switch (nota)
    {
    case 1:
        this->modelo->setNota1(valor);
        break;
    case 2:
        this->modelo->setNota2(valor);
        break;
    case 3:
        this->modelo->setNota3(valor);
        break;
    default:
        break;
    }
}

string Controlador::visualizar()
{
    string str = this->modelo->getDatos() + "Promedio: " + to_string(this->promedio()) + "\n\n";
    return str;
}

Vista::Vista()
{
    this->control = new Controlador();
}

Vista::~Vista() {}

bool Vista::estaEnRango(int nota)
{
    if ((0 < nota) && (nota <= 10))
    {
        return true;
    }
    return false;
}

void Vista::imprimir()
{
    cout << control->visualizar();
}

void Vista::actualizarNota()
{
    int nota = 0;
    do
    {
        cout << "Ingrese la nota 1: ";
        cin >> nota;
    } while (!estaEnRango(nota));
    this->control->actualizarNota(1, nota);
    cout << "Nota 1 actualizada!" << endl;
}
