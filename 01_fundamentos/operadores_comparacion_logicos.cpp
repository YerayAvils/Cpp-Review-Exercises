// Ejercicio: Operadores,comparacion y logicos
// Objetivo: Repasar operadores de comparación y operadores lógicos

#include <iostream>
using namespace std;


int main(){
    int num;
    int num2;

    cout << "Introduzca el primer numero: ";
    cin >> num;
    cout << "Introduzca el segundo numero: ";
    cin >> num2;

    if(!(num == num2)){
        cout << "Los numeros no son iguales" << endl;
    }else{
        cout << "Los numeros son iguales" << endl;
    }
    if(num > num2){
        cout << "El primer numero es mayor al segundo" << endl;
    }else if(num < num2){
        cout << "El segundo numero es mayor al primero" << endl;
    }
    if(num > 10 && num2 > 10){
        cout << "Ambos numeros son mayores a 10" << endl;
    }else if(num > 10 || num2 > 10){
        cout << "Solo uno de los numeros es mayor a 10" << endl;
    }else{
        cout << "No hay numeros mayores a 10" << endl;
    }

    return 0;
}