#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> ordenarArreglo(const std::vector<int>& arreglo) {
    std::vector<int> arregloOrdenado = arreglo;
    std::sort(arregloOrdenado.begin(), arregloOrdenado.end());
    return arregloOrdenado;
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

    std::vector<int> arregloOrdenado = ordenarArreglo(arreglo);
    std::cout << "El arreglo ordenado es: ";
    for (int num : arregloOrdenado) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}