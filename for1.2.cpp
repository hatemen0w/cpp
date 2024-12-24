#include <iostream>
#include <limits>

int main() {
    int visitors;
    std::cout << "Введите количество посетителей за день: ";
    std::cin >> visitors;

    if (visitors <= 0) {
        std::cout << "Ошибка: количество посетителей должно быть больше нуля." << std::endl;
        return 1;
    }

    int age, youngest = std::numeric_limits<int>::max(), oldest = std::numeric_limits<int>::min(), totalAge = 0;

    for (int i = 1; i <= visitors; ++i) {
        std::cout << "Введите возраст посетителя " << i << ": ";
        std::cin >> age;

        if (age <= 0) {
            std::cout << "Ошибка: возраст должен быть больше нуля." << std::endl;
            return 1;
        }

        totalAge += age;
        if (age < youngest) youngest = age;
        if (age > oldest) oldest = age;
    }

    double averageAge = static_cast<double>(totalAge) / visitors;

    std::cout << "Самый молодой посетитель: " << youngest << " лет." << std::endl;
    std::cout << "Самый старший посетитель: " << oldest << " лет." << std::endl;
    std::cout << "Средний возраст посетителей: " << averageAge << " лет." << std::endl;

    return 0;
}
