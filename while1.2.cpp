#include <iostream>

int main() {
    int start, end;
    int sum = 0; 

    std::cout << "Введите начало диапазона: ";
    std::cin >> start;
    std::cout << "Введите конец диапазона: ";
    std::cin >> end;

    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    std::cout << "Сумма всех нечетных чисел в диапазоне [" << start << ", " << end << "] равна " << sum << "." << std::endl;

    return 0;
}
