// Ejercicio: Encapsulacion
// Objetivo: Comprender el concepto de encapsulación

#include <iostream>
using namespace std;

class CuentaBancaria{
    private:
        double saldo;
    public:
        CuentaBancaria(){
            this->saldo = 0;
        }

        double getConsultar() const;
        void setDepositar(double nuevoSaldo);
        void retiro(double saldoRetirado);

};

int main(){
    double saldoDispo = 0;
    CuentaBancaria cuenta;

    cuenta.setDepositar(1000);
    saldoDispo = cuenta.getConsultar();
    cout << "Saldo disponible: " << saldoDispo << endl;

    cuenta.setDepositar(500);
    saldoDispo = cuenta.getConsultar();
    cout << "Saldo disponible: " << saldoDispo << endl;

    cuenta.retiro(200);
    saldoDispo = cuenta.getConsultar();
    cout << "Saldo disponible: " << saldoDispo << endl;

    cuenta.retiro(2000);
    saldoDispo = cuenta.getConsultar();
    cout << "Saldo disponible: " << saldoDispo << endl;

    cuenta.retiro(0);
    saldoDispo = cuenta.getConsultar();
    cout << "Saldo disponible: " << saldoDispo << endl;


    return 0;
}

double CuentaBancaria::getConsultar() const{
    return saldo;
}
void CuentaBancaria::setDepositar(double nuevoSaldo){
    if(nuevoSaldo > 0) 
        saldo += nuevoSaldo;
    else 
        cout << "No se puede introducir saldo negativo." << endl;
}
void CuentaBancaria::retiro(double saldoRetirado){
    if(saldoRetirado > saldo){
        cout << "No se puede realizar el retiro por que sobrepasa el saldo actual." << '\n';
    }else if (saldoRetirado <= 0){
        cout << "No se puede retirar cantidades menores o iguales a cero." << endl;
    }else{
        saldo -= saldoRetirado;
    }
}