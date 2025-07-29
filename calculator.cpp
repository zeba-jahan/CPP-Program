#include <iostream>
using namespace std;

// Global constant
const double PI = 3.14159;

// Power function
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

// Factorial with static cache
int factorial(int n) {
    static int last = 1, fact = 1;
    if (n < last) {
        last = 1;
        fact = 1;
    }
    for (int i = last + 1; i <= n; i++)
        fact *= i;
    last = n;
    return fact;
}

// GCD using modulus
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Prime check
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    // Local variables
    int p = power(5, 3);            // 5^3 = 125
    int f = factorial(4) & 15;      // 24 & 15 = 8
    int g = gcd(12, 8) << 2;        // 4 << 2 = 16

    int result = p + f - g;

    cout << "Result of (5^3) + (factorial(4) & 15) - (gcd(12,8) << 2): ";
    cout << result << endl;

    // Prime check (with block scope)
    int num;
    cout << "Enter a number to check prime: ";
    cin >> num;

    {
        bool isP = isPrime(num); // block scope variable
        if (isP)
            cout << num << " is Prime\n";
        else
            cout << num << " is NOT Prime\n";
    }

    return 0;
}
