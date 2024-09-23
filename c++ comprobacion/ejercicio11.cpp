#include <iostream>
#include <cmath>

bool esNumeroArmstrong(int numero) {
    int original = numero;
    int suma = 0;
    int n = 0;

    // Contar el número de dígitos
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = numero;

    // Calcular la suma de los dígitos elevados a la potencia n
    while (original != 0) {
        int digito = original % 10;
        suma += std::pow(digito, n);
        original /= 10;
    }

    return suma == numero;
}

int main() {
    int numero;
    std::cout << "Introduce un numero: ";
    std::cin >> numero;

    if (esNumeroArmstrong(numero)) {
        std::cout << numero << " es un numero Armstrong." << std::endl;
    } else {
        std::cout << numero << " no es un numero Armstrong." << std::endl;
    }

    return 0;
}
