#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;

public:
    Persona(std::string nombre) : nombre(nombre) {
        std::cout << "Se ha creado a " << nombre << std::endl;
    }
    
    ~Persona() {
        std::cout << nombre << " ha sido destruido" << std::endl;
    }
};

int main() {
    Persona persona1("Juan");
    {
        Persona persona2("Maria");
    } // Al salir de este bloque, se destruye persona2
    
    return 0;
}

