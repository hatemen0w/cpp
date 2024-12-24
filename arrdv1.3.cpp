#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n, m;
    std::cout << "Введите размеры массива (n x m): ";
    std::cin >> n >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    int value = 1;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = value++;
            }
        } else {
            for (int j = m - 1; j >= 0; --j) {
                matrix[i][j] = value++;
            }
        }
    }

    std::cout << "Заполненный массив:" << std::endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            std::cout << std::setw(4) << elem;
        }
        std::cout << std::endl;
    }

    return 0;
}
