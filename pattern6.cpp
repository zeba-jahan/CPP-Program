#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) {
            cout << "  ";
        }
        for (int star = 1; star <= (2 * i - 1); star++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
