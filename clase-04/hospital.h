#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <string>
#include "paciente.h"

using namespace std;

class Hospital {
    private:
        string nombre;
        Paciente pacientes[10];
        int pacientesIngresados;
    public:
        Hospital(string);
        void ingresarPaciente();
        void listarPacientes();

        int getPacientesIngresados();
};

#endif