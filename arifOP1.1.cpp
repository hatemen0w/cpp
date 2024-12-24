#include <iostream>

using namespace std;

int main() {
    int number = 5678;
    std::cout << "Число в обратном порядке: ";

    while (number > 0) {
        int digit = number % 10;
        std::cout << digit;
        number /= 10;
    }

    std::cout << std::endl;
    return 0;
}
