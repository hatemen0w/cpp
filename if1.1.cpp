#include <iostream>
#include <string>

std::string numberToWords(int number) {
    std::string ones[] = {"", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    std::string teens[] = {"", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
    std::string tens[] = {"", "десять", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто"};
    std::string hundreds[] = {"", "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот"};
    std::string thousands[] = {"", "тысяча", "две тысячи", "три тысячи", "четыре тысячи", "пять тысяч", "шесть тысяч", "семь тысяч", "восемь тысяч", "девять тысяч"};

    std::string result = "";
    result += thousands[number / 1000] + " ";
    number %= 1000;

    result += hundreds[number / 100] + " ";
    number %= 100;

    if (number > 10 && number < 20) {
        result += teens[number - 10] + " ";
    } else {
        result += tens[number / 10] + " ";
        result += ones[number % 10] + " ";
    }

    return result;
}

std::string getCurrencyEnding(int number) {
    if (number % 10 == 1 && number % 100 != 11) return "доллар";
    if (number % 10 >= 2 && number % 10 <= 4 && (number % 100 < 10 || number % 100 >= 20)) return "доллара";
    return "долларов";
}

int main() {
    int amount;
    std::cout << "Введите сумму (от 1 до 9999): ";
    std::cin >> amount;

    if (amount < 1 || amount > 9999) {
        std::cout << "Ошибка: сумма должна быть в диапазоне от 1 до 9999." << std::endl;
        return 1;
    }

    std::cout << numberToWords(amount) << getCurrencyEnding(amount) << std::endl;

    return 0;
}
