#include <iostream>
#include <string>

class Empleado {
protected:
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

class Gerente : public Empleado {
private:
    int numSubordinados;

public:
    void establecerNumSubordinados(int num) {
        numSubordinados = num;
    }

    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Salario: $" << salario << ", Departamento: " << departamento << ", Subordinados: " << numSubordinados << std::endl;
    }
};

int main() {
    Gerente gerente1;
    gerente1.establecerNombre("Laura"); // Aquí se establece el nombre usando el método de la clase base
    gerente1.establecerSalario(5000.0);
    gerente1.establecerDepartamento("Gerencia");
    gerente1.establecerNumSubordinados(5);

    gerente1.mostrarInformacion();

    return 0;
}


