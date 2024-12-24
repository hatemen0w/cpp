#include <iostream>

int main() {
    while (true) {
        int number;
        char choice;

        std::cout << "Введите число для вычисления квадрата: ";
        std::cin >> number;

        std::cout << "Квадрат числа " << number << " равен " << (number * number) << std::endl;

        std::cout << "Хотите продолжить? (y/n): ";
        std::cin >> choice;

        if (choice == 'n' || choice == 'N') {
            std::cout << "Программа завершена." << std::endl;
            break;
        }
    }

    return 0;
}
