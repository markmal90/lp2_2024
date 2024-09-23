#include <iostream>
#include <vector>

int sumarElementos(const std::vector<int>& arreglo) {
    int suma = 0;
    for (int num : arreglo) {
        suma += num;
    }
    return suma;
}

int main() {
    int n;
    std::cout << "Introduce el tamaño del arreglo: ";
    std::cin >> n;

    std::vector<int> arreglo(n);
    std::cout << "Introduce los elementos del arreglo: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arreglo[i];
    }

    int suma = sumarElementos(arreglo);
    std::cout << "La sumatoria de los elementos del arreglo es: " << suma << std::endl;

    return 0;
}
