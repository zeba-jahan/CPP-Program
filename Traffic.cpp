#include <iostream>
using namespace std;

int main() {
    char light;
    int time;

    cout << "Enter current light (R/G/Y): ";
    cin >> light;
    cout << "Enter remaining time: ";
    cin >> time;

    if (light == 'G' || light == 'g') {
        cout << "Current: GREEN light\n";
        cout << "Countdown: ";
        for (int i = time; i >= 0; i--) {
            cout << i << " ";
        }
        cout << "\nYELLOW light activated for 5 seconds\n";
        cout << "Next: RED light will activate after 5 seconds\n";
    } 
    else {
        cout << "GREEN light for simplicity.\n";
    }

    return 0;
}
