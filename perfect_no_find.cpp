#include <iostream>
using namespace std;

bool isPerfect(int num) {
    if (num <= 1) return false;
    int sum = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPerfect(n))
        cout << n << " is a Perfect Number." << endl;
    else
        cout << n << " is NOT a Perfect Number." << endl;

    return 0;
}