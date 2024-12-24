#include <iostream>

int main() {
    int totalBoxes = 15;

    while (totalBoxes > 0) {
        int loadBoxes;
        std::cout << "На складе " << totalBoxes << " ящиков. Сколько ящиков загрузить в машину? ";
        std::cin >> loadBoxes;

        if (loadBoxes <= 0) {
            std::cout << "Ошибка: количество ящиков должно быть больше нуля." << std::endl;
            continue;
        }

        if (loadBoxes > totalBoxes) {
            std::cout << "Ошибка: на складе недостаточно ящиков. Доступно только " << totalBoxes << " ящиков." << std::endl;
            continue;
        }

        totalBoxes -= loadBoxes;
        std::cout << "Загружено " << loadBoxes << " ящиков. Осталось " << totalBoxes << " ящиков." << std::endl;
    }

    std::cout << "Все ящики загружены!" << std::endl;

    return 0;
}
