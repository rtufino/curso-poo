#include <iostream>
#include <string>
#include "hospital.h"
#include "paciente.h"

using namespace std;

Hospital::Hospital(){
	this->nombre = "";
	this->pacientesIngresados = 0;
}

Hospital::Hospital(string nombre){
	this->nombre = nombre;
	this->pacientesIngresados = 0;
}

void Hospital::ingresarPaciente(){
	string nombre;
	int edad;
	bool estaContagiado;
	
	cout << "\nIngrese el nombre del paciente: ";
	getline(cin, nombre);
	cout << "Ingrese la edad del paciente: ";
	cin >> edad;
	
	// IMPORTANTISIMO !!!
	// Obtener el indice para el vector de pacientes
	int indice = this->pacientesIngresados;
	
	// Crear el objeto y guardar en el vector
	this->pacientes[indice] = Paciente(nombre,edad);
	
	cout << "Tiene Covit-19 (1=Si, 0=No): ";
	cin >> estaContagiado;
	this->pacientes[indice].setPositivo(estaContagiado);
	
	cin.ignore();		// limpiar el buffer de cin (siempre que utilizo strings utilizo esto)
	
	this->pacientesIngresados++;
}

void Hospital::listarpacientes(){
	cout << "\n= =  HOSPITAL " + this->nombre + " = =" << endl;
	for (int i=0; i < this->pacientesIngresados; i++){
		cout << this->pacientes[i].getDatos();
	} 
}
