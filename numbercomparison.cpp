#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three num: ";
    cin >> a >> b >> c;

    int largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    
    int smallest = a;
    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    
    int first, second, third;
    if (a <= b && a <= c) {
        first = a;
        if (b <= c) {
            second = b; third = c;
        } else {
            second = c; third = b;
        }
    } else if (b <= a && b <= c) {
        first = b;
        if (a <= c) {
            second = a; third = c;
        } else {
            second = c; third = a;
        }
    } else {
        first = c;
        if (a <= b) {
            second = a; third = b;
        } else {
            second = b; third = a;
        }
    }

    cout << "Ascending order: " << first << ", " << second << ", " << third << endl;
    cout << "Descending order: " << third << ", " << second << ", " << first << endl;

    return 0;
}