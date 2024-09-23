#include <iostream>
#include <vector>

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) return false;
    }
    return true;
}

std::vector<int> primerosNPrimos(int n) {
    std::vector<int> primos;
    int numero = 2;
    while (primos.size() < n) {
        if (esPrimo(numero)) {
            primos.push_back(numero);
        }
        ++numero;
    }
    return primos;
}

int main() {
    int n;
    std::cout << "Introduce el numero de primeros numeros primos que deseas: ";
    std::cin >> n;

    std::vector<int> primos = primerosNPrimos(n);
    std::cout << "Los primeros " << n << " numeros primos son: ";
    for (int primo : primos) {
        std::cout << primo << " ";
    }
    std::cout << std::endl;

    return 0;
}
