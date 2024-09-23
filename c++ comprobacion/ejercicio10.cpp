#include <iostream>

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    std::cout << "Introduce el primer numero: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo numero: ";
    std::cin >> num2;

    int mcd = calcularMCD(num1, num2);
    std::cout << "El máximo común divisor de " << num1 << " y " << num2 << " es " << mcd << std::endl;

    return 0;
}
