#include <iostream>
#include <vector>

std::vector<int> generarFibonacci(int n) {
    std::vector<int> fibonacci;
    if (n <= 0) return fibonacci;
    fibonacci.push_back(0);
    if (n == 1) return fibonacci;
    fibonacci.push_back(1);
    for (int i = 2; i < n; ++i) {
        fibonacci.push_back(fibonacci[i - 1] + fibonacci[i - 2]);
    }
    return fibonacci;
}

int main() {
    int n;
    std::cout << "Introduce el numero de terminos de la secuencia de Fibonacci que deseas: ";
    std::cin >> n;

    std::vector<int> fibonacci = generarFibonacci(n);
    std::cout << "Los primeros " << n << " numeros de la secuencia de Fibonacci son: ";
    for (int num : fibonacci) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
