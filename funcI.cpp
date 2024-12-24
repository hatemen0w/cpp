#include <iostream>

void Swap(int &a, int &b) {
    a = a + b; // суммируем значения a и b
    b = a - b; //новое b
    a = a - b; //новое a
}

int main() {
    int x, y;

    std::cout << "Введите два числа: ";
    std::cin >> x >> y;

    std::cout << "До Swap: x = " << x << ", y = " << y << std::endl;

    Swap(x, y);

    std::cout << "После Swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}
