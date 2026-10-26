// Ejercicio: Vector busqueda
// Objetivo: Practicar las operaciones principales de std::vector

#include <iostream>
#include <vector>

using namespace std;

vector<int> buscarEnVector(const vector<int> &digitos, const int num);
void mostrarId(const vector<int> &id, const int &num);


int main(){
    vector<int> numeros, idPosiciones;
    int num, busc;

    for(int i = 1; i <= 10; i++){
        cout << "Introduzca 10 numeros (" << i << "): " ;
        cin >> num;
        numeros.push_back(num);
    }
    cout << "\nIntroduzca el numero que desea buscar: ";
    cin >> busc;

    idPosiciones = buscarEnVector(numeros, busc);
    if (!idPosiciones.empty()){
        mostrarId(idPosiciones, busc);
    }else{
        cout << "Valor no encontrado en el vector" << endl;
    }

    return 0;
}

vector<int> buscarEnVector(const vector<int> &digitos, const int num){
    vector<int> posiciones;
    int posicion = digitos.size();
    for(int i = 0; i < posicion; i++){
        if(num == digitos.at(i)){
            posiciones.push_back(i);
        }
    }
    return posiciones;
}

void mostrarId(const vector<int> &id, const int &num){
    for(auto e : id){
        cout << num << " En la posicion: " << e << " del vector" << endl;
    }
}
