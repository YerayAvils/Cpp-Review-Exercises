// Ejericicio: If else
// Objetivo: Repasar decisiones con `if`, `else if` y `else`.

#include <iostream>
using namespace std;

int main(){
    int edad;
    int num;

    cout << "Introduzca una edad: ";
    cin >> edad;

    if(edad < 0){
        cout << "No se puede intoducir edades negativas" << endl;
    }else if(edad == 0){
        cout << "Es un bebe" << endl;
    }else if(edad < 12 && edad > 0){
        cout << "Es un niño/a" << endl;
    }else if(edad < 18 && edad > 11){
        cout << "Es un adolecente" << endl;
    }else if(edad < 30 && edad > 17){
        cout << "Es un joven" << endl;
    }else if(edad < 60 && edad > 29){
        cout << "Es un adulto" << endl;
    }else{
        cout << "Es un adulto mayor" << endl;
    }

    cout << "Introduzca otro numero: ";
    cin >> num;

    if(num == 0){
        cout << "Su numero es cero" << endl;
    }else if(num < 0){
        cout << "Su numero es negativo" << endl;
    }else{
        cout << "Su numero es positivo" << endl;
    }

    return 0;
}