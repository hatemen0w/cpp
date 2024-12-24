#include <iostream>
#include <vector>

int main() {
    int n, m, k;
    std::cout << "Введите количество рядов и мест (n x m): ";
    std::cin >> n >> m;

    std::vector<std::vector<int>> cinema(n, std::vector<int>(m));
    std::cout << "Введите матрицу занятости мест:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> cinema[i][j];
        }
    }

    std::cout << "Введите количество подряд свободных мест, которые нужно найти: ";
    std::cin >> k;

    for (int i = 0; i < n; ++i) {
        int freeSeats = 0;
        for (int j = 0; j < m; ++j) {
            if (cinema[i][j] == 0) {
                freeSeats++;
                if (freeSeats == k) {
                    std::cout << "Подходящий ряд: " << (i + 1) << std::endl;
                    return 0;
                }
            } else {
                freeSeats = 0;
            }
        }
    }

    std::cout << "Нет подходящего ряда." << std::endl;
    return 0;
}
