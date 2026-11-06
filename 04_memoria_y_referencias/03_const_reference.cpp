// Ejercicio: Const references
// Objetivo: Practicar referencias constantes.

#include <iostream>
#include <string>

void refConstante(const std::string& v);

int main(){
    refConstante("Hello");

    return 0;
}

/*El const nos ayuda a que no 
    se pueda cambiar el valor de una variable*/
void refConstante(const std::string& v){
    // v = "Cambio"; error al compilar por intentar cambiar el valor.
    std::cout << v << std::endl;
}