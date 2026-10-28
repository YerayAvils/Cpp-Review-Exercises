// Ejercicio: Getters y Setters
// Objetivo: Practicar getters y setters

#include <iostream>
using namespace std;

class Clase{
    private:
        int numero;
        int numero2;
    public:
        Clase(){
            this->numero = 0;
            this->numero2 = 0;
        }
        Clase(int n, int n2){
            numero = n;
            numero2 = n2;
        }
        
        //Getters
        int getNumero() const;
        int getNumero2() const;

        //Setters
        void setNumero(int nuevoNumero);
        void setNumero2(int nuevoNumero2);
};

int main(){
    Clase clase(1, 25);
    cout << "Primer numero " << clase.getNumero() << '\n';
    cout << "Segundo numero " << clase.getNumero2() << '\n';

    clase.setNumero(100);
    clase.setNumero2(-25);

    cout << "Primer numero " << clase.getNumero() << '\n';
    cout << "Segundo numero " << clase.getNumero2() << '\n';

    return 0;
}

int Clase::getNumero() const{
    return numero;
}
int Clase::getNumero2() const{
    return numero2;
}

void Clase::setNumero(int nuevoNumero){
    if(nuevoNumero > 0) 
        numero = nuevoNumero;
    else 
        cout << "No se puede introducir numero negativo" << endl;
}
void Clase::setNumero2(int nuevoNumero2){
    if(nuevoNumero2 > 0) 
        numero2 = nuevoNumero2;
    else 
        cout << "No se puede introducir numero negativo" << endl;
}