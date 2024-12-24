#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// Функция для отображения кубика
void drawDie(int value) {
    const char* dieFaces[7] = {
        "",
        "  *  ",          // 1
        " *   *",         // 2
        " * * *",         // 3
        "*     *",        // 4
        "* *   * *",      // 5
        "* * * * *"       // 6
    };

    std::cout << "+-----+" << std::endl;
    if (value == 1) {
        std::cout << "|     |" << std::endl;
        std::cout << "|  *  |" << std::endl;
        std::cout << "|     |" << std::endl;
    } else if (value == 2 || value == 3) {
        std::cout << "|*    |" << std::endl;
        if (value == 2) std::cout << "|     |" << std::endl;
        else std::cout << "|  *  |" << std::endl;
        std::cout << "|    *|" << std::endl;
    } else {
        std::cout << "|*   *|" << std::endl;
        if (value == 5) std::cout << "|  *  |" << std::endl;
        else std::cout << "|     |" << std::endl;
        std::cout << "|*   *|" << std::endl;
    }
    std::cout << "+-----+" << std::endl;
}

// Функция для броска кубика
int rollDie() {
    return rand() % 6 + 1;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int computerScore = 0, userScore = 0;
    int computerFirst = rand() % 2; // 0 — пользователь первый, 1 — компьютер первый

    std::cout << (computerFirst ? "Компьютер ходит первым!\n" : "Вы ходите первым!\n");

    // 4 раунда
    for (int round = 1; round <= 4; ++round) {
        std::cout << "\nРаунд " << round << std::endl;

        // Бросок компьютера
        int compDie1 = rollDie(), compDie2 = rollDie();
        int compRoundScore = compDie1 + compDie2;
        computerScore += compRoundScore;

        std::cout << "Компьютер бросает: " << std::endl;
        drawDie(compDie1);
        drawDie(compDie2);
        std::cout << "Очки за бросок: " << compRoundScore << std::endl;

        // Бросок пользователя
        int userDie1 = rollDie(), userDie2 = rollDie();
        int userRoundScore = userDie1 + userDie2;
        userScore += userRoundScore;

        std::cout << "Вы бросаете: " << std::endl;
        drawDie(userDie1);
        drawDie(userDie2);
        std::cout << "Очки за бросок: " << userRoundScore << std::endl;

        // Промежуточный результат
        std::cout << "Промежуточный счет: Компьютер: " << computerScore
                  << ", Вы: " << userScore << std::endl;
    }

    // Итоговый результат
    std::cout << "\nИтоговый счет: Компьютер: " << computerScore
              << ", Вы: " << userScore << std::endl;

    if (computerScore > userScore) {
        std::cout << "Победил компьютер!" << std::endl;
    } else if (computerScore < userScore) {
        std::cout << "Вы победили!" << std::endl;
    } else {
        std::cout << "Ничья!" << std::endl;
    }

    return 0;
}
