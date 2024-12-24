#include <iostream>

using namespace std;

int main() {
    int number = 5678; // Четырехзначное число
    std::cout << "Число в обратном порядке: ";

    while (number > 0) {
        int digit = number % 10; // Получаем последнюю цифру
        std::cout << digit;      // Выводим цифру
        number /= 10;            // Убираем последнюю цифру
    }

    std::cout << std::endl;
    return 0;
}
