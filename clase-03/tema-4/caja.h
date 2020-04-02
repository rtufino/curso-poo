#ifndef CAJA_H
#define CAJA_H

class Caja{
    private:
        double largo;
        double ancho;
        double alto;
    public:
        // lleva la cuenta de cuantos objetos se crean
        static int numeroCajas;

        Caja(double, double, double);
        double volumen();
        void mostrar();
        void setLargo(double);
        void setAncho(double);
        void setAlto(double);
        const double getLargo();
        const double getAncho();
        const double getAlto();

        // comapra dos cajas
        static bool comparar(Caja &, Caja &);
};

#endif