#include <iostream>
#include <string>
#include "hospital.h"
#include "paciente.h"
using namespace std;

Hospital::Hospital(string nombre)
{
    this->nombre = nombre;
    this->pacientesIngresados = 0;
}

void Hospital::ingresarPaciente()
{
    string nombre;
    int edad;

    cout << "\nIngresar nombre del paciente: ";
    getline(cin, nombre);
    cout << "Ingresar la edad: ";
    cin >> edad;

    this->pacientes[Hospital::pacientesIngresados] = Paciente(nombre, edad);

    cout << "Tiene Covit-19 (1 = Si, 0 = No): ";
    bool estaContagiado;
    cin >> estaContagiado;

    cin.ignore(); 

    this->pacientes[Hospital::pacientesIngresados].setPositivo(estaContagiado);
    
    Hospital::pacientesIngresados++;
}

void Hospital::listarPacientes()
{
    cout << "\n= = Hospital " + this->nombre + " = =" << endl;
    for (int i = 0; i < Hospital::pacientesIngresados; i++)
    {
        cout << this->pacientes[i].toString();
    }
}
