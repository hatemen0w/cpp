#include <cmath>
#include <iostream>

bool IsPointInArea(double x, double y) {
    bool inUpperCircle = (x * x + y * y <= 4) && (y >= 0);

    bool inLowerTriangle = (y <= 0) && (y >= -2 * x - 2) && (y >= 2 * x - 2);

    return inUpperCircle || inLowerTriangle;
}

int main() {
    double x, y;
    std::cout << "Введите координаты x и y: ";
    std::cin >> x >> y;

    if (IsPointInArea(x, y)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
