#include <iostream>
#include <string>

std::string convertirABinario(int numero) {
    if (numero == 0) return "0";
    std::string binario = "";
    while (numero > 0) {
        binario = std::to_string(numero % 2) + binario;
        numero /= 2;
    }
    return binario;
}

int main() {
    int numero;
    std::cout << "Introduce un numero entero: ";
    std::cin >> numero;

    std::string binario = convertirABinario(numero);
    std::cout << "La representacion binaria de " << numero << " es " << binario << std::endl;

    return 0;
}
