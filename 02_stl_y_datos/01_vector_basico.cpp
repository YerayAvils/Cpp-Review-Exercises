/*
Ejercicio: Vector básico
Objetivo: practicar push_back, front, back, size, pop_back, clear y empty.
*/

#include <iostream>
#include <vector>

using namespace std;

void mostrarVector(const vector<int> &vec);
void mostrarPosicion(const vector<int> &vec);


int main() {
    vector<int> num;
    int dato;

    for(int i = 1; i <= 5; i++){
        cout << "Introduzca el numero " << i << ": ";
        cin >> dato;
        num.push_back(dato);
    }

    mostrarVector(num);

    cout << "\nPrimer elemento guardado: " << num.front() 
         << "\nUltimo elemento guardado: " << num.back() << endl;
    cout << "Cantidad de elementos guardados en el vector: " << num.size() << endl;
    
    mostrarPosicion(num);
    
    //Se elimina el ultimo dato del vector
    num.pop_back();

    mostrarVector(num);

    //Se vacia el vector
    num.clear();

    if (num.empty()){
        cout << "\nVector vacio" << endl;
    }

    return 0;
}

void mostrarVector(const vector<int> &vec){
    cout << "Elementos del Vector:" << endl; 
    for(int num : vec)
        cout << num << " ";
}

void mostrarPosicion(const vector<int> &vec){
    int pos;
    int limite = vec.size() - 1;
    cout << "Indique una posicion: ";
    cin >> pos;
    if(pos > limite || pos < 0){
        cout << "Posicion no valida" << endl;
    }else{
        cout << "El valor en dicha posicion es: " << vec[pos] << endl;
    }
}