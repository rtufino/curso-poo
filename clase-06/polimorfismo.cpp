/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 09-04-2020
 * 
 * Ejemplo de Polimorfismo
 */
#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    string nombre;

protected:
    string queSoy;

public:
    Animal() : nombre("sin nombre") {}
    Animal(string nombre) : nombre(nombre) {}
    // Método virtual polimorfico
    virtual string habla()
    {
        return "Grrrr!";
    }

    string quienEres()
    {
        return "Soy un " + this->queSoy + " y me llamo " + this->nombre;
    }
};

class Perro : public Animal
{
public:
    Perro(string nombre) : Animal(nombre)
    {
        this->queSoy = "perro";
    }
    // Sobreescritura del método habla
    string habla()
    {
        return "guau! guau!";
    }
};

class Gato : public Animal
{
public:
    Gato(string nombre) : Animal(nombre)
    {
        this->queSoy = "gato";
    }
    // Sobreescritura del método habla
    string habla()
    {
        return "miau! miau!";
    }
};

class Humano : public Animal
{
public:
    Humano(string nombre) : Animal(nombre)
    {
        this->queSoy = "humano";
    }
    // Sobreescritura del método habla
    string habla()
    {
        return "habla mijín!";
    }
};

int main()
{
    // crear un vector de punteros de tipo Animal.
    Animal *farm[3];
    // Instancias dinámicas de objetos
    farm[0] = new Perro("Tarzan");
    farm[1] = new Gato("Chispas");
    farm[2] = new Humano("Juan Carlos");
    // recorrer el vector de objetos
    for (int i = 0; i < 3; i++)
    {
        // invocación al metodo definido en clase base
        cout << farm[i]->quienEres() << ": ";
        // llamada al metodo polimorfico
        cout<< farm[i]->habla() << endl;
    }
}