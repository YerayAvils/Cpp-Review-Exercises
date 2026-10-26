// Ejercicio: Constructores
// Objetivo: Practicar constructores

#include <iostream>
#include <string>
using namespace std;

class Producto{
    private:
        string nombre;
        int precio;
    public:
        Producto(){
            this->nombre = "";
            this->precio = 0;

        }
        Producto(string n, int p){
            nombre = n;
            precio = p;
        }
        void print() const;
};

int main(){
    Producto primero("Galletas", 21);
    Producto segundo("Sabritas", 28);
    Producto tercero("CocaCola", 26);
    Producto cuarto;

    cout << "Primer uso del constructor: " << '\n';
    primero.print();
    cout << "Segundo uso del constructor: " << '\n';
    segundo.print();
    cout << "Tercer uso del constructor: " << '\n';
    tercero.print();
    cout << "Cuarto uso del constructor: " << '\n';
    cuarto.print();

    return 0;
}

void Producto::print() const{
    cout << nombre << '\n';
    cout << precio << '\n';

}