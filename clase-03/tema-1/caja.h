#ifndef CAJA_H
#define CAJA_H

class Caja{
    private:
        double largo;
        double ancho;
        double alto;
    public:
        Caja(double, double, double);
        double volumen();
        void mostrar();
        void setLargo(double);
        void setAncho(double);
        void setAlto(double);
};

#endif