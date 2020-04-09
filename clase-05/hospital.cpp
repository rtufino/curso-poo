/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 09-04-2020
 * 
 * Implementación de la clase "Hospital"
 */

#include <iostream>
#include <string>
#include "hospital.h"
#include "paciente.h"

using namespace std;

Hospital::Hospital()
{
	this->nombre = "";
	this->pacientesIngresados = 0;
}

Hospital::Hospital(string nombre)
{
	this->nombre = nombre;
	this->pacientesIngresados = 0;
}

void Hospital::ingresarPaciente()
{
	string nombre;
	int edad;
	float altura, masa;
	char genero;
	bool estaContagiado;

	cout << "\nIngrese el nombre del paciente: ";
	getline(cin >> ws, nombre);
	cout << "Ingrese la edad del paciente: ";
	cin >> edad;
	cout << "Ingrese el genero del paciente (M=masculino, F=femenino): ";
	cin >> genero;
	cout << "Ingrese la altura y la mas del paciente: ";
	cin >> altura >> masa;

	// IMPORTANTISIMO !!!
	// Obtener el indice para el vector de pacientes
	int indice = this->pacientesIngresados;

	// Crear el objeto y guardar en el vector
	this->pacientes[indice] = Paciente(nombre, edad, genero, altura, masa);

	cout << "Tiene Covit-19 (1=Si, 0=No): ";
	cin >> estaContagiado;
	this->pacientes[indice].setPositivo(estaContagiado);

	this->pacientesIngresados++;
}

void Hospital::listarpacientes()
{
	cout << "\n= = LISTA DE TODOS LOS PACIENTES ==" << endl;
	cout << "Hospital: " << this->nombre << endl;
	for (int i = 0; i < this->pacientesIngresados; i++)
	{
		cout << this->pacientes[i].getDatos();
	}
}

void Hospital::darDeAlta(){
	int id;
	cout << "\n= = DAR DE ALTA UN PACIENTE ==" << endl;
	cout << "Ingrese el ID del paciente: ";
	cin >> id;
	
	for (int i = 0; i < this->pacientesIngresados; i++)
	{
		if (this->pacientes[i].getId() == id){
			this->pacientes[i].setAlta(true);
			cout << "El paciente: " + this->pacientes[i].getNombre();
			cout << " ha sido dado de alta." << endl;
			return;
		}
	}
	cout << "No se encontró un paciente con id = " + to_string(id) << endl;	
}

void Hospital::listarPacientesInfectados(){
	cout << "\n= = LISTA DE INFECTADOS CON COVID-19 ==" << endl;
	for (int i = 0; i < this->pacientesIngresados; i++)
	{
		if (this->pacientes[i].getPositivo() && !this->pacientes[i].getAlta()){
			cout << this->pacientes[i].getDatos();
		}
	}
}

void Hospital::listarPacientesDadosAlta(){
	cout << "\n= = LISTA DE PACIENTES DADOS DE ALTA ==" << endl;
	for (int i = 0; i < this->pacientesIngresados; i++)
	{
		if (this->pacientes[i].getAlta()){
			cout << this->pacientes[i].getDatos();
		}
	}
}