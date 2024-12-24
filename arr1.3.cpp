#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

int main() {
    const int SIZE = 10;
    std::vector<int> array1(SIZE), array2(SIZE), array3(SIZE);
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < SIZE; ++i) {
        array1[i] = rand() % 41 + 10;
        array2[i] = rand() % 41 + 10;
        array3[i] = array1[i] + array2[i];
    }

    std::cout << "Первый массив: ";
    for (int value : array1) std::cout << value << " ";
    std::cout << "\nВторой массив: ";
    for (int value : array2) std::cout << value << " ";
    std::cout << "\nТретий массив (суммы): ";
    for (int value : array3) std::cout << value << " ";

    double sum = 0;
    int maxVal = array3[0];
    int minVal = array3[0];

    for (int value : array3) {
        sum += value;
        if (value > maxVal) maxVal = value;
        if (value < minVal) minVal = value;
    }
    double average = sum / SIZE;

    std::cout << "\n\nСреднее арифметическое элементов третьего массива: " << average;
    std::cout << "\nМаксимальное значение в третьем массиве: " << maxVal;
    std::cout << "\nМинимальное значение в третьем массиве: " << minVal << std::endl;

    return 0;
}
