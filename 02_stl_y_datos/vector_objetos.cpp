// Ejercicio: Vector objeto
// Objetivo: Practicar vectores que almacenan objetos

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Producto{
    private:
        string nombre;
        double precio;
        int cantidad;
    public:
        Producto(){
            nombre = "";
            precio = 0.0;
            cantidad = 0;
        }
        void insertar(string n, double p, int c);
        void imprimir(const vector<Producto> &vec);
};

int main(){
    vector<Producto> productos;
    int op;

    do{
        cout << "[1] Registrar \n";
        cout << "[2] Mostrar \n";
        cout << "[3] Buscar \n";
        cout << "[0] Salir \n";
        cout << "Seleccione una opcion: ";
        cin >> op;
        Producto p1;
        switch(op){
            case 0:
                cout << "Hasta luego!!" << endl;
                break;
            case 1: {
                Producto p;
                string nom;
                double pre;
                int cant;
                cout << "Introduzca el nombre del producto: ";
                cin >> nom;
                cout << "Introduzca el precio del producto: ";
                cin >> pre;
                cout << "Introduzca la cantidad del producto: ";
                cin >> cant;
                p.insertar(nom, pre, cant);
                productos.push_back(p);
                break;
            }
            case 2:

                break;
            case 3:

                break;
        }

    }while(op != 0);

    return 0;
}

void Producto::insertar(string n, double p, int c){
    nombre = n;
    precio = p;
    cantidad = c;
}

void Producto::imprimir(const vector<Producto> &vec){
    for(const auto &e : vec){
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
    }
}