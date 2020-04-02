#include <iostream>
#include "caja.h"

using namespace std;

Caja::Caja(double largo, double alto, double ancho){
    this->largo = largo;
    this->alto = alto;
    this->ancho = ancho;

    // inclrementa el número de cajas
    numeroCajas++;
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

bool Caja::comparar(Caja &caja1, Caja &caja2){
    return caja1.volumen() > caja2.volumen();
}

const double Caja::getAlto(){
    return alto;
}

const double Caja::getAncho(){
    return ancho;
}

const double Caja::getLargo(){
    return largo;
}
