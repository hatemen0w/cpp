#include <iostream>
#include <vector>

int main() {
    int n;

    do {
        std::cout << "Введите нечетное число n (не больше 15): ";
        std::cin >> n;
    } while (n % 2 == 0 || n > 15 || n <= 0);

    std::vector<std::vector<char>> matrix(n, std::vector<char>(n, '.'));

    int mid = n / 2;

    for (int i = 0; i < n; ++i) {
        matrix[i][mid] = '*';
        matrix[mid][i] = '*';
        matrix[i][i] = '*';
        matrix[i][n - 1 - i] = '*';
    }

    for (const auto& row : matrix) {
        for (char elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
