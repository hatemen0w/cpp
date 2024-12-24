#include <iostream>
#include <vector>
#include <algorithm>

void shiftLeft(std::vector<int>& arr, int start, int count) {
    for (int i = 0; i < count; ++i) {
        int first = arr[start];
        for (size_t j = start; j < arr.size() - 1; ++j) {
            arr[j] = arr[j + 1];
        }
        arr[arr.size() - 1] = first;
    }
}

void shiftRight(std::vector<int>& arr, int end, int count) {
    for (int i = 0; i < count; ++i) {
        int last = arr[end];
        for (int j = end; j > 0; --j) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    std::vector<int> arr = {5, 1, 7, 3, 2, 9, 4, 6, 8};
    int maxOdd = -1, maxOddIndex = -1;

    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 != 0 && arr[i] > maxOdd) {
            maxOdd = arr[i];
            maxOddIndex = i;
        }
    }

    //сдвиги
    if (maxOddIndex != -1) {
        shiftLeft(arr, maxOddIndex + 1, 3);
        shiftRight(arr, maxOddIndex - 1, 1);
    }

    std::cout << "Массив после операций: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
