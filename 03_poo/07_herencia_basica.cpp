// Ejercicio: Herencia Basica
// Objetivo: Practicar herencia.

#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        string familia;
        string nombre;

        Animal(){
            this->nombre = "";
            this->familia = "";
        }
        void printNombre() const{
            cout << nombre << '\n';
        }
};

class Perro : public Animal{
    private:
        int edad;
        string raza;
    public:
        Perro(){
            this->edad = 0;
            this->raza = "";
        }
        Perro(string nombre, string raza, string familia, int edad){
            this->nombre = nombre;
            this->raza = raza;
            this->familia = familia;
            this->edad = edad;
        }
        void print() const;
};

class Serpiente : public Animal{
    private:
        string infraOrden;
    public:
        Serpiente(string familia, string nombre, string infraOrden){
            this->familia = familia;
            this->nombre = nombre;
            this->infraOrden = infraOrden;
        }
        void print() const;
};

int main(){
    Perro perro("Firulais", "Chiuahua", "Canino", 1);
    perro.print();

    Serpiente serpiente("Boidae", "Boa", "Alethinophidia");
    serpiente.print();

    return 0;
}

void Perro::print() const{
    printNombre();
    cout << "Raza: " << raza << '\n' 
         << "Familia animal: " << familia << '\n'
         << "Edad: " << edad << " años\n" 
         << endl;
}
void Serpiente::print() const{
    printNombre();
    cout << "Familia animal: " << familia << '\n'
         << "Infraorden: " << infraOrden << '\n' 
         << endl;
}