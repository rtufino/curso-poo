#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Automovil
{
private:
    string marca;
    float cilindraje;
    int anio;

public:
    explicit Automovil() : marca(""), cilindraje(0), anio(1900) {}
    Automovil(string ma, float ci, int an) : marca(ma), cilindraje(ci), anio(an) {}
    string getDatos()
    {
        return "\nMarca: " + this->marca + "\n" +
               "Cilindraje: " + to_string(this->cilindraje) + "\n" +
               "Año: " + to_string(this->anio);
    }
};

int main()
{
    vector<Automovil> autos;
    Automovil carro;

    carro = Automovil("Chevrolet", 1.8, 2014);
    autos.push_back(carro);

    carro = Automovil("Renault", 1.6, 2016);
    autos.push_back(carro);

    cout << "Tamaño de automóviles: " << autos.size() << endl;

    for (Automovil &a : autos)
    {
        cout << a.getDatos() << endl;
    }
    return 0;
}