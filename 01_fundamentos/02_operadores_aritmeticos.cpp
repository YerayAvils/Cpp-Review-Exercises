// Ejercicio: Repaso de operadores aritmeticos
// Objetivo: Repasar operadores aritméticos

#include <iostream>

using namespace std;

int main(){
    int num, num2;

    cout << "Introduzca el primer numero: ";
    cin >> num;
    cout << "introduzca el segundo numero: ";
    cin >> num2;

    cout << "Suma: " << num + num2
         << "\nResta: " << num - num2
         << "\nMultiplicacion: " << num * num2;
    if(num2 == 0){
        cout << "\nDivision no permitida" << endl;
    }else{
        cout << "\nDivision: " << static_cast<double>(num) / num2;
        cout << "\nModulo: " << num % num2;
    }

    return 0;
}