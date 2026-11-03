// Ejercicio: Herencia personas
// Objetivo: Reforzar clases base y derivadas.

#include <iostream>
#include <string>
using namespace std;

class Persona{
    public:
        bool vivo;
        string nombre;
        int edad;
        Persona(bool vivo = true, string nombre = "", int edad = 0){
            this->vivo = vivo;
            this->nombre = nombre;
            this->edad = edad;
        }
        void Datos() const;
};
class Estudiante : public Persona{
    private:
        double promedio;
        int semestre;
        string carrera;
    public:
        Estudiante(bool vivo, string nombre, int edad, double promedio = 0.0, int semestre = 0, string carrera = "") 
                  : Persona(vivo, nombre, edad){
            this->promedio = promedio;
            this->semestre = semestre;
            this->carrera = carrera;
        }
        void mostrarDatos() const;
};
class Empleado : public Persona{
    private:
        int numEmp;
        string area;
    public:
        Empleado(bool vivo, string nombre, int edad, int numEmp = 0, string area = "") 
                : Persona(vivo, nombre, edad){
            this->numEmp = numEmp;
            this->area = area;
        }
        void mostrarDatos() const;
};

int main(){
    Persona persona(true, "Yeray", 21);
    cout << "\nPersona\n";
    persona.Datos();

    Estudiante estudiante(true, "Yeray", 21, 8.6, 3, "Ing. civil");
    cout << "\nEstudiante\n";
    estudiante.mostrarDatos();

    Empleado empleado(true, "Yeray", 21, 123, "Construccion");
    cout << "\nEmpleado\n";
    empleado.mostrarDatos();

    return 0;
}

void Persona::Datos() const{
    string v;
    if(vivo == true) v = "Vivo";
    else v = "Muerto";
    cout << "Estado: " << v << '\n'
         << "Nombre: " << nombre << '\n'
         << "Edad: " << edad  << '\n';
}

void Estudiante::mostrarDatos() const{
    Datos();
    cout << "Promedio: " << promedio << '\n'
         << "Semestre: " << semestre << '\n'
         << "Carrera: " << carrera  << '\n';
}

void Empleado::mostrarDatos() const{
    Datos();
    cout << "Numero de empleado: " << numEmp << '\n'
         << "Area: " << area << '\n';
}