#include <iostream>
#include <string>

class Empleado {
public :
    std::string nombre;
    float salarioBase;

public:
    Empleado(std::string nombre, float salarioBase) : nombre(nombre), salarioBase(salarioBase) {}
    
    virtual float calcularSalario() {
        return salarioBase;
    }
};

class Gerente : public Empleado {
private:
    float bono;

public:
    Gerente(std::string nombre, float salarioBase, float bono) : Empleado(nombre, salarioBase), bono(bono) {}
    
    float calcularSalario() override {
        return salarioBase + bono;
    }
};

void imprimirSalario(Empleado& empleado) {
    std::cout << "El salario de " << empleado.nombre << " es: $" << empleado.calcularSalario() << std::endl;
}

int main() {
    Empleado empleado1("Juan", 3000.0);
    Gerente gerente1("Laura", 5000.0, 2000.0);
    
    imprimirSalario(empleado1);
    imprimirSalario(gerente1);
    
    return 0;
}

