#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  

    int rounds, score = 0;
    cout << "===== DICE GAME =====\n";
    cout << "Enter no of rounds: ";
    cin >> rounds;

    for (int i = 1; i <= rounds; i++) {
        cout << "\nRound " << i << ": Rolling dice...\n";

        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;

        cout << "Dice 1: " << dice1 << ", Dice 2: " << dice2 << "\n";

        if (sum == 7) {
            cout << "Sum: " << sum << " - LUCKY SEVEN! Double points!\n";
            score = score * 2 + sum * 2;
        } else if (dice1 == dice2 && sum != 2) {
            cout << "Sum: " << sum << " - DOUBLE! Bonus points!\n";
            score += sum + 10;
        } else if (sum == 2) {
            cout << "Sum: " << sum << " - SNAKE EYES! All points lost!\n";
            score = 0;
        } else {
            cout << "Sum: " << sum << "\n";
            score += sum;
        }

        cout << "Score: " << score << "\n";
    }

    cout << "\nFinal Score: " << score << "\n";
    return 0;
}
