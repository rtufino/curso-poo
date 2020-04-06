#include <iostream>
#include "paciente.h"
#include "hospital.h"

using namespace std;

// Inicializar la variable estatica
int Paciente::totalPacientes = 0;

int main(){
	// Creando un paciente
	Paciente p("Gorgolito Perez", 58);
	// Imprimir datos del paciente
	cout << p.getDatos();
	
	// Crear un hospital
	Hospital hcam ("Carlos Andrade Marin");
	hcam.ingresarPaciente();		// Ingresar un paciente
	hcam.ingresarPaciente();		// Ingresar otro paciente
	hcam.listarpacientes();			// Listar los pacientes
	
	// Imprimir el total de pacientes
	cout << "Total pacientes: " << Paciente::totalPacientes << endl;
	return 0;
}
