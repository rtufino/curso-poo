#include <iostream>
#include "caja.h"

using namespace std;

Caja::Caja(double largo, double alto, double ancho){
    this->largo = largo;
    this->alto = alto;
    this->ancho = ancho;
}

double Caja::volumen(){
    return largo * alto * ancho;
}

void Caja::mostrar(){
    cout << "Caja: " << largo << " x " << alto << " x " << ancho << endl;
}

void Caja::setAlto(double alto){
    this->alto = alto;
}

void Caja::setAncho(double ancho){
    this->ancho = ancho;
}

void Caja::setLargo(double largo){
    this->largo = largo;
}

bool Caja::comparar(Caja &caja){
    return this->volumen() > caja.volumen();
}