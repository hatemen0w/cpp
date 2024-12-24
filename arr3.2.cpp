#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<int> arr = {3, 7, 2, 9, 12, 5};
    int minEven = std::numeric_limits<int>::max();
    bool foundEven = false;

    for (int num : arr) {
        if (num % 2 == 0) {
            foundEven = true;
            if (num < minEven) {
                minEven = num;
            }
        }
    }

    if (foundEven) {
        std::cout << "Наименьший четный элемент массива: " << minEven << std::endl;
    } else {
        std::cout << "Четные элементы отсутствуют. Первый элемент массива: " << arr[0] << std::endl;
    }

    return 0;
}
