#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBinary of a: " << bitset<8>(a);
    cout << "\nBinary of b: " << bitset<8>(b);

    cout << "\n\nAND: " << (a & b);
    cout << "\nOR: " << (a | b);
    cout << "\nXOR: " << (a ^ b);
    cout << "\nNOT a: " << (~a);
    cout << "\nLeft Shift a: " << (a << 1);
    cout << "\nRight Shift a: " << (a >> 1);

    cout << "\n\n" << a << (a & 1 ? " is Odd" : " is Even");
    cout << "\n" << a << " * 2 = " << (a << 1);
    cout << "\n" << a << " / 2 = " << (a >> 1);

    return 0;
}                    


