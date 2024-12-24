#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {0, 3, 7, 0, 2, 9, 12, 0, 5};
    std::vector<int> result;

    for (int num : arr) {
        if (num == 0) {
            result.push_back(num);
        }
    }
    for (int num : arr) {
        if (num != 0) {
            result.push_back(num);
        }
    }

    std::cout << "Преобразованный массив: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
