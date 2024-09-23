#include <iostream>
#include <cmath>

int main() {
    double base, exponente;
    std::cout << "Introduce el numero base: ";
    std::cin >> base;
    std::cout << "Introduce el exponente: ";
    std::cin >> exponente;

    double resultado = pow(base, exponente);
    std::cout << base << " elevado a " << exponente << " es " << resultado << std::endl;

    return 0;
}
