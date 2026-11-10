// Ejercicio: Puntero basico
// Objetivo: Introducir punteros.

#include <iostream>

int main(){
    int numero = 10;
    int* puntero = &numero;

    std::cout << "Variable original: " << numero << '\n'
              << "Direccion: " << &numero << '\n'
              << "Valor puntero: " << puntero << std::endl;
    *puntero = 20;
    std::cout << "Valor al desreferenciarlo: " << *puntero << '\n';
    
    return 0;
}