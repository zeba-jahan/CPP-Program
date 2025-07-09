#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0;
    cin >> n;

    for (; n != 0; n = n / 10) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
    }
    cout << "Reversed number = " << reverse;
    
}
