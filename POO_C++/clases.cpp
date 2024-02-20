#include <iostream>
#include <string>

class Empleado {
public:
    std::string nombre;
    float salario;
    std::string departamento;
    
    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Salario: $" << salario << ", Departamento: " << departamento << std::endl;
    }
};

int main() {
    Empleado empleado1;
    empleado1.nombre = "Juan";
    empleado1.salario = 3000.0;
    empleado1.departamento = "Ventas";
    
    empleado1.mostrarInformacion();
    
    return 0;
}

