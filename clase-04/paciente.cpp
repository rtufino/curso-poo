#include "paciente.h"
using namespace std;

Paciente::Paciente(){
	this->nombre = "";
	this->edad = 0;
	this->positivo = false;
}

Paciente::Paciente(string nombre, int edad){
	this->nombre = nombre;
	this->edad = edad;
	this->positivo = false;
	// Ingrementa el total de pacientes "creados"
	Paciente::totalPacientes++;
	// Asignar un numero al paciente
	this->id = Paciente::totalPacientes;
}

void Paciente::setPositivo(bool valor){
	this->positivo = valor;
}

bool Paciente::getPositivo(){
	return this->positivo;
}

string Paciente::estaContagiado(){
	/*
	if (this->positivo){
		return "Si";
	}else {
		return "No";
	}
	*/
	return this->positivo ? "Si" : "No";
}

string Paciente::getDatos(){
	return "ID: " + to_string(this->id) + "\n" +
			"Nombre: " + this->nombre + "\n" +
			"Edad: " + to_string(this->edad) + "\n" +
			"Tiene Covid-19: " + this->estaContagiado() + "\n\n";
}
