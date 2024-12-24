#include <iostream>

int main() {
    int number1, number2;
    std::cout << "Введите два однозначных числа для проверки таблицы умножения: ";
    std::cin >> number1 >> number2;

    if (number1 < 1 || number1 > 9 || number2 < 1 || number2 > 9) {
        std::cout << "Ошибка: оба числа должны быть в диапазоне от 1 до 9." << std::endl;
        return 1;
    }

    int correctAnswer = number1 * number2;
    int userAnswer;

    std::cout << "Сколько будет " << number1 << " * " << number2 << "? ";
    std::cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        std::cout << "Правильно!" << std::endl;
    } else {
        std::cout << "Неправильно! Правильный ответ: " << correctAnswer << std::endl;
    }

    return 0;
}
