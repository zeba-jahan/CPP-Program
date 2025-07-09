#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for (; n != 0; n = n/ 10) {
        sum += n % 10;
    }
    cout << "Sum of digits = " << sum << endl;
    return 0;
}
