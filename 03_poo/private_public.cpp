// Ejercicio: Private y public
// Objetivo: Comprender la diferencia entre `private` y `public`.

#include <iostream>
using namespace std;

class Practica{
    private:    /* Las variables declaradas en private 
                   solo se pueden usar dentro de la clase en la que se encuentran*/
        int a = 0;
        int b = 1;
        public: // Las publicas se pueden llamar desde cualquier otra funcion
            int obtenerA();
            int obtenerB();
            int c = 2;
            int d = 3;
};

int main(){
    Practica prueva;

    // Intento de imprimir variables que se encuentran dentro de private
    //cout << prueva.a; ERROR
    //cout << prueva.b; ERROR

    // Intento de imprimir variables que se encuentran dentro de public
    cout << prueva.c << endl;
    cout << prueva.d << endl;

    cout << prueva.obtenerA() << endl;
    cout << prueva.obtenerB() << endl;

    return 0;
}

int Practica::obtenerA(){
    return a;
}
int Practica::obtenerB(){
    return b;
}