#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {3, 7, 2, 9, 12, 5};
    int maxElement = arr[0];

    for (int num : arr) {
        if (num > maxElement) {
            maxElement = num;
        }
    }

    std::cout << "Наибольший элемент массива: " << maxElement << std::endl;

    return 0;
}
