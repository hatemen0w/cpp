#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cout << "Введите размеры массива (n x m): ";
    std::cin >> n >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
    std::vector<std::vector<int>> rotated(m, std::vector<int>(n));

    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    std::cout << "Повернутый массив:" << std::endl;
    for (const auto& row : rotated) {
        for (int elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
