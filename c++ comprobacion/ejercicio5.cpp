#include <iostream>

bool esCapicua(int numero) {
    int original = numero;
    int reverso = 0;

    while (numero != 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    return original == reverso;
}

int main() {
    int numero;
    std::cout << "Ingrese un Numero: ";
    std::cin >> numero;

    if (esCapicua(numero)) {
        std::cout << numero << " El numero es CAPICUA." << std::endl;
    } else {
        std::cout << numero << " El numero no es Capicua." << std::endl;
    }

    return 0;
}
