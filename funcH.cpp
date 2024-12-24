#include <iostream>

double power(double a, int n) {
    double result = 1.0;

    if (n > 0) {
        for (int i = 0; i < n; ++i) {
            result *= a;
        }
    }
    else if (n < 0) {
        for (int i = 0; i < -n; ++i) {
            result *= a;
        }
        result = 1.0 / result;
    }

    return result;
}

int main() {
    double a;
    int n;

    std::cout << "Введите число a и степень n: ";
    std::cin >> a >> n;

    std::cout << "Результат: " << power(a, n) << std::endl;

    return 0;
}
