// Ejercicio: `this`
// Objetivo: Comprender el puntero `this`.

#include <iostream>
#include <string>
using namespace std;

class Carros{
    private:
        string motor;
        int modelo;
    public:
        Carros(){
            this->motor = "";
            this->modelo = 0;
        }
        Carros(string motor, int modelo){
            // `this` funciona para aclarar que son variables diferentes 
            // aun que tengan el mismo nombre.
            // permite acceder al objeto actual desde sus funciones miembro no estáticas.
            this->motor = motor;
            this->modelo = modelo;
        }
};

int main(){
    Carros mustang("V6", 2005);
    Carros dodge("V8", 1995);

    return 0;
}