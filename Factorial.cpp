/*#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial of " << n << " = " << factorial;
    return 0;
}
*/



#include <iostream>
using namespace std;
int main(){
    int n,factorial=1;
    cin >> n;
    for (int i=1; i<=n; i++){
        factorial = factorial * i;
    }
    cout << "factorial of " << n << " = " << factorial;
}

