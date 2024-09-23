#include <iostream>

int sumaDigitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

int main() {
    int numero;
    std::cout << "Introduce un numero: ";
    std::cin >> numero;

    while (numero >= -9 && numero <= 9) {
        std::cout << "El numero tiene un solo digito. Por favor, introduce un número con mas de un digito: ";
        std::cin >> numero;
    }

    int resultado = sumaDigitos(numero);
    std::cout << "La suma de los digitos de " << numero << " es " << resultado << std::endl;

    return 0;
}
