// Ejercicio: Direccion y Memoria
// Objetivo: Comprender las direcciones de memoria.

#include <iostream>

int main(){
    int numero = 5;
    double decimal = 8.69;

    std::cout << "Primer valor: " << numero << '\n' 
              << "Segundo valor: " << decimal << std::endl;
    std::cout << "Primera direccion con &: " << &numero << '\n' 
              << "Segundo direccion con &: " << &decimal << std::endl;

    return 0;
}