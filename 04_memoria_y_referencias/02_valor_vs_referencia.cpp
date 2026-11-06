// Ejercicio: Valor vs referencia
// Objetivo: Comprender la diferencia entre paso por valor y paso por referencia.

#include <iostream>

int valor(int n);
int valorRef(int& n2);

int main(){
    int num = 15;
    
    std::cout << num << std::endl;
    std::cout << valor(num) << std::endl;
    
    std::cout << valorRef(num) << std::endl;
    std::cout << num << std::endl;

    return 0;
}

int valor(int n){
    n = 20;
    return n;
}

int valorRef(int& n2){
    n2 = 50;
    return n2;
}