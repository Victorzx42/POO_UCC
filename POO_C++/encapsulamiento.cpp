#include <iostream>
#include <string>

class Empleado {
private:
    std::string nombre;
    float salario;
    std::string departamento;

public:
    void establecerNombre(std::string nombre) {
        this->nombre = nombre;
    }
    
    void establecerSalario(float salario) {
        this->salario = salario;
    }
    
    void establecerDepartamento(std::string departamento) {
        this->departamento = departamento;
    }
    
    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Salario: $" << salario << ", Departamento: " << departamento << std::endl;
    }
};

int main() {
    Empleado empleado1;
    empleado1.establecerNombre("Juan");
    empleado1.establecerSalario(3000.0);
    empleado1.establecerDepartamento("Ventas");
    
    empleado1.mostrarInformacion();
    
    return 0;
}

