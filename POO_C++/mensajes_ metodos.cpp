#include <iostream>

class Perro {
public:
    void ladrar() {
        std::cout << "¡Guau guau!" << std::endl;
    }
};

int main() {
    Perro miPerro;
    miPerro.ladrar(); // Mensaje enviado al objeto miPerro para que ladre
    
    return 0;
}

