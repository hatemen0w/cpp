#include <iostream>

int main() {
    int fingerNumber;
    std::cout << "Введите порядковый номер пальца (1-5): ";
    std::cin >> fingerNumber;

    switch (fingerNumber) {
        case 1: std::cout << "Большой палец" << std::endl; break;
        case 2: std::cout << "Указательный палец" << std::endl; break;
        case 3: std::cout << "Средний палец" << std::endl; break;
        case 4: std::cout << "Безымянный палец" << std::endl; break;
        case 5: std::cout << "Мизинец" << std::endl; break;
        default: std::cout << "Ошибка: номер должен быть от 1 до 5." << std::endl; break;
    }

    return 0;
}
