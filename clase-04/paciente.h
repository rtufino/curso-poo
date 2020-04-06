#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
using namespace std;

class Paciente
{
private:
    int id;
    string nombre;
    int edad;
    bool positivo;
    string estaContagiado();

public:
    Paciente();
    Paciente(string, int);
    void setPositivo(bool);
    bool getPositivo();
    string toString();
    static int totalPacientes;
};

#endif