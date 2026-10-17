// Ejercicio: Vector estadisticas
// Objetivo: Practicar recorridos y cálculos sobre un vector

#include <iostream>
#include <vector>

using namespace std;

void calculo(const vector<int> &myVec);


int main(){
    vector<int> vec;
    int tam;
    int datos;

    cout << "Indique el tamaño del vector: ";
    cin >> tam;
    if(tam == 0){
        cout << "No se puede declarar el tamaño en 0";
    }else if(tam < 0){
        cout << "No se pueden introducir numeros negativos";
    }else{
        for(int i = 0; i < tam; i++){
            cout << "Introduzca el numero (" << i + 1 << "): ";
            cin >> datos;
            vec.push_back(datos);
        }
        calculo(vec);
        
    }
    

    return 0;
}

void calculo(const vector<int> &myVec){
    double suma = 0;
    int mayor = myVec[0];
    int menor = myVec[0];
    double promedio;
    int igualCero = 0;
    int positivo = 0;
    int negativo = 0;
    for(auto e : myVec){
        suma += e;
        if(e > mayor){
            mayor = e;
        }else if(e < menor){
            menor = e;
        }
        if(e == 0){
            igualCero += 1;
        }else if(e < 0){
            negativo += 1;
        }else if(e > 0){
            positivo += 1;
        }
    }
    promedio = suma / myVec.size();
    cout << "La suma total es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    if(igualCero == 0){
        cout << "No hay numeros iguales a cero" << endl;
    }else{
        cout << "Hay " << igualCero << " numeros iguales a 0" << endl;
    }
    if(negativo == 0){
        cout << "No hay numeros negativos" << endl;
    }else{
        cout << "Hay " << negativo << " numeros negativos" << endl;
    }
    if(positivo == 0){
        cout << "No hay numeros positivos" << endl;
    }else{
        cout << "Hay " << positivo << " numeros positivos" << endl;
    }

}