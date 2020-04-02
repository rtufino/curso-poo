#include <iostream>
#include "caja.h"

using namespace std;

Caja::Caja(double la, double al, double an){
    largo = la;
    alto = al;
    ancho = an;
}

double Caja::volumen(){
    return largo * alto * ancho;
}

void Caja::mostrar(){
    cout << "Caja: " << largo << " x " << alto << " x " << ancho << endl;
}

void Caja::setAlto(double al){
    alto = al;
}

void Caja::setAncho(double an){
    ancho = an;
}

void Caja::setLargo(double la){
    largo = la;
}