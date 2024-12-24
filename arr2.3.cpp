#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, -2, 3, -4, 5, -6, 7};
    int sum = 0;

    for (int num : arr) {
        if (num < 0) {
            sum += num;
        }
    }

    std::cout << "Сумма отрицательных элементов: " << sum << std::endl;
    return 0;
}
