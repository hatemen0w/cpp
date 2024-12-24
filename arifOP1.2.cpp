#include <iostream>

int main() {
    double depositAmount;
    int months;
    const double annualRate = 5.0;
    const int daysInYear = 365;

    std::cout << "Введите сумму депозита: ";
    std::cin >> depositAmount;
    std::cout << "Введите количество месяцев хранения: ";
    std::cin >> months;

    double monthlyProfit = depositAmount * (annualRate / 100) / daysInYear * 30;
    double totalProfit = monthlyProfit * months;
    double totalPayout = depositAmount + totalProfit;

    std::cout << "Прибыль с депозита за месяц: " << monthlyProfit << std::endl;
    std::cout << "Общая прибыль за весь срок: " << totalProfit << std::endl;
    std::cout << "Общая сумма к выплате: " << totalPayout << std::endl;

    return 0;
}