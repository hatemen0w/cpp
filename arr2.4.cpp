#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int product = 1;

    for (size_t i = 1; i < arr.size(); i += 2) {
        product *= arr[i];
    }

    std::cout << "Произведение элементов с нечетными номерами: " << product << std::endl;
    return 0;
}
