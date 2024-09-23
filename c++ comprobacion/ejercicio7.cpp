#include <iostream>

bool esNumeroPerfecto(int numero) {
    int suma = 0;
    for (int i = 1; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    return suma == numero;
}

int main() {
    int numero;
    std::cout << "Introduce un numero: ";
    std::cin >> numero;

    if (esNumeroPerfecto(numero)) {
        std::cout << numero << " es un numero perfecto." << std::endl;
    } else {
        std::cout << numero << " no es un numero perfecto." << std::endl;
    }

    return 0;
}
