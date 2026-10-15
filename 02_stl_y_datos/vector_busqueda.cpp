// Ejercicio: Vector busqueda
// Objetivo: Practicar las operaciones principales de std::vector

#include <iostream>
#include <vector>

using namespace std;

void buscarEnVector(const vector<int> &digitos, const int num);


int main(){
    vector<int> numeros;
    double num, busc;

    for(int i = 1; i <= 10; i++){
        cout << "Introduzca 10 numeros (" << i << "): " ;
        cin >> num;
        numeros.push_back(num);
    }
    cout << "\nIntroduzca el numero que desea buscar: ";
    cin >> busc;

    buscarEnVector(numeros, busc);


    return 0;
}

void buscarEnVector(const vector<int> &digitos, const int num){
    int posicion;
    for(int i = 0; i < digitos.size(); i++){
        if(num == digitos.at(i)){
            // Imprimir la posicion del numero escogido
        }
    }
}