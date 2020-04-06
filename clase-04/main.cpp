#include <iostream>
#include "paciente.h"
#include "hospital.h"

int Paciente::totalPacientes = 0;

int main()
{
    Paciente p("Juan Perez", 79);
    cout << p.toString();

    Hospital hcam ("Carlos Andrade Marin");
    hcam.ingresarPaciente();
    hcam.ingresarPaciente();
    hcam.listarPacientes();

    cout << "\nTotal de pacientes: " << Paciente::totalPacientes << endl;

    return 0;
}