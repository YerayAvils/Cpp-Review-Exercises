// Ejercicio: Variables y sus tipos
// Objetivo: Repasar operadores aritméticos

#include <iostream>
#include <string>

using namespace std;


int main() {
    int entero = 1;
    const double pi = 3.14159; // Variable con varios decimales y constante
    float dec = 4.55;
    char car = '@'; // Se declara con comillas simples
    bool verFl = false; // O false (true = 1, false = 0)
    string variosCar = "Hola me llamo Yeray"; // Con comillas dobles

    cout << entero << endl;
    cout << pi << endl;
    cout << dec << endl;
    cout << car << endl;
    cout << verFl << endl;
    cout << variosCar << endl;

    return 0;
}