#include <cmath>
#include <iostream>

bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
    double distanceSquared = (x - xc) * (x - xc) + (y - yc) * (y - yc);
    return distanceSquared <= r * r;
}

int main() {
    double x, y, xc, yc, r;
    std::cout << "Введите координаты точки (x, y): ";
    std::cin >> x >> y;
    std::cout << "Введите координаты центра круга (xc, yc) и радиус r: ";
    std::cin >> xc >> yc >> r;

    if (IsPointInCircle(x, y, xc, yc, r)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
