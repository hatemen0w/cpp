#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 0, 3, 4, 0, 5, 6};
    int firstZero = -1, secondZero = -1, sum = 0;

    // Поиск первых двух нулей
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) {
            if (firstZero == -1) {
                firstZero = i;
            } else {
                secondZero = i;
                break;
            }
        }
    }

    // Вычисление суммы
    if (firstZero != -1 && secondZero != -1) {
        for (int i = firstZero + 1; i < secondZero; ++i) {
            sum += arr[i];
        }
    }

    std::cout << "Сумма элементов между двумя первыми нулями: " << sum << std::endl;
    return 0;
}
