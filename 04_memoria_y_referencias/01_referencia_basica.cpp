// Ejercicio: Referencia basica
// Objetivo: Comprender qué es una referencia.

#include <iostream>

int main(){
    int entera = 10;
    int& enteraRef = entera;

    std::cout << entera << '\n'
              << enteraRef << std::endl;
    enteraRef = 15;
    std::cout << entera << '\n'
              << enteraRef << std::endl;

    return 0;
}