#include "paciente.h"
using namespace std;

Paciente::Paciente(){
    this->nombre = "";
    this->edad = 0;
    this->positivo = false;
}

Paciente::Paciente(string nombre, int edad)
{
    this->id = ++Paciente::totalPacientes;
    this->nombre = nombre;
    this->edad = edad;
    this->positivo = false;
}

void Paciente::setPositivo(bool valor)
{
    this->positivo = valor;
}

bool Paciente::getPositivo(){
    return this->positivo;
}

string Paciente::estaContagiado(){
    return this->positivo ? "Si" : "No";
}

string Paciente::toString()
{
    return "ID: " + to_string(this->id) + "\n" +
           "Nombre: " + this->nombre + "\n" +
           "Edad: " + to_string(this->edad) + "\n"
           "Tiene Covid-19: " + this->estaContagiado() + "\n\n";
}