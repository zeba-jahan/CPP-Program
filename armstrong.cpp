#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = (int)log10(num) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong Number." << endl;
    else
        cout << n << " is NOT an Armstrong Number." << endl;

    return 0;
}
