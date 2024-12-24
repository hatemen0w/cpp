#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {3, 7, 2, 9, 12, 5};
    int minIndex = 0, maxIndex = 0;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int sumOfIndexes = minIndex + maxIndex;
    std::cout << "Сумма номеров минимального и максимального элементов: " << sumOfIndexes << std::endl;

    return 0;
}
