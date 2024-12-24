#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    std::vector<int> arr = {1, 2, 3, 1, 2, 3, 3, 4, 5, 6};
    std::unordered_map<int, int> countMap;

    for (int num : arr) {
        countMap[num]++;
    }

    std::vector<int> result;
    for (int num : arr) {
        if (countMap[num] <= 2) {
            result.push_back(num);
        }
    }

    std::cout << "Массив после удаления чисел с повторениями более двух раз: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
