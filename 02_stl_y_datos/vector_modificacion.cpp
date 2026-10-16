// Ejercicio: Modificacion de un vector
// Objetivo: Practicar acceso y modificación de elementos

#include <iostream>
#include <vector>

using namespace std;

void imprimirVec(const vector<int> &vec);
void cambioValor(vector<int> &vec, const int &pos, const int &cambio);
bool comprobar(const vector<int> &vec, const int &num);
void eliminarValor(vector<int> &vec, const int &pos);


int main(){
    vector<int> myVec = {1, 58, 21, 83, 12};
    int myPos;
    int num;
    bool resp;

    imprimirVec(myVec);

    cout << "\n" << "Introduzca una posicion (indice): ";
    cin >> myPos;
    resp = comprobar(myVec, myPos);
    if(resp){
        cout << "\n" << "Introduzca el nuevo numero: ";
        cin >> num;
        cambioValor(myVec, myPos, num);
    }

    imprimirVec(myVec);
    
    cout << "\n" << "Introduzca una posicion a borrar (indice): ";
    cin >> myPos;
    resp = comprobar(myVec, myPos);
    if(resp){
        eliminarValor(myVec, myPos);
    }

    imprimirVec(myVec);


    return 0;
}

void imprimirVec(const vector<int> &vec){
    cout << "Valores del vector: ";
    for(auto e : vec){
        cout << e << " ";
    }
    cout << " ";
}
void cambioValor(vector<int> &vec, const int &pos, const int &cambio){
            vec[pos] = cambio;
}

bool comprobar(const vector<int> &vec, const int &num){
    if(num > vec.size()-1 || num < 0){
        cout << "Valor no encontrado en el vector" << endl;
        return false;
    }
    return true;
}

void eliminarValor(vector<int> &vec, const int &pos){
        vec.erase(vec.begin()+pos);
        cout << "Elemento borrado del vector exitosamente" << endl;

}
