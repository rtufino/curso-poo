#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

using namespace std;

class Estudiante
{
private:
    string nombre;
    int nota1;
    int nota2;
    int nota3;

public:
    explicit Estudiante();
    Estudiante(string nom, int n1, int n2, int n3);
    ~Estudiante();
    void setNota1(int valor);
    void setNota2(int valor);
    void setNota3(int valor);
    int getNota1();
    int getNota2();
    int getNota3();
    string getDatos();
};

class Controlador
{
private:
    Estudiante *modelo;
    void cargarBaseDatos();
    float promedio();

public:
    explicit Controlador();
    ~Controlador();
    void actualizarNota(int nota, int valor);
    string visualizar();
    bool aprueba();
    int ayudar();
};

class Vista
{
private:
    Controlador *control;
    bool estaEnRango(int nota);
public:
    explicit Vista();
    ~Vista();
    void imprimir();
    void actualizarNota();
    void estaAprobado();
    void ayudar();
};

#endif