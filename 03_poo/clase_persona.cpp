// Ejercicio: Clase persona
// Objetivo: Practicar la creación básica de clases y objetos

#include <iostream>
#include <string>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
        public:
            void asignar(string n, int e);
            void mostrar();
};

int main(){
    Persona yeray;
    yeray.asignar("Yeray", 21);
    yeray.mostrar();

    Persona nuevaP;
    nuevaP.asignar("Carlos", 30);
    nuevaP.mostrar();
    return 0;
}

void Persona::asignar(string n, int e){
    nombre = n;
    edad = e;
}

void Persona::mostrar(){
    cout << nombre << " " 
         << edad << endl;
}