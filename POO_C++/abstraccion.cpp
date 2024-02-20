#include <iostream>

class Forma {
public:
    virtual float calcularArea() = 0;
    virtual float calcularPerimetro() = 0;
};

class Rectangulo : public Forma {
private:
    float base, altura;

public:
    Rectangulo(float base, float altura) : base(base), altura(altura) {}
    
    float calcularArea() override {
        return base * altura;
    }
    
    float calcularPerimetro() override {
        return 2 * (base + altura);
    }
};

int main() {
    Rectangulo rectangulo(5.0, 3.0);
    std::cout << "Area del rectangulo: " << rectangulo.calcularArea() << std::endl;
    std::cout << "Perimetro del rectangulo: " << rectangulo.calcularPerimetro() << std::endl;
    
    return 0;
}

