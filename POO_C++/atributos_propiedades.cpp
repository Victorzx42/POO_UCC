#include <iostream>

class CuentaBancaria {
private:
    float saldo;

public:
    void establecerSaldo(float nuevoSaldo) {
        saldo = nuevoSaldo;
    }
    
    float obtenerSaldo() {
        return saldo;
    }
};

int main() {
    CuentaBancaria cuenta;
    cuenta.establecerSaldo(1000.0);
    std::cout << "Saldo actual: $" << cuenta.obtenerSaldo() << std::endl;
    
    return 0;
}

