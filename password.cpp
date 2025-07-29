/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    getline(cin, password);

    int length = password.length();
    int uppercase = 0, lowercase = 0, digits = 0, special = 0;

    for (int i = 0; i < length; i++) {
        char ch = password[i];
        if (ch >= 'A' && ch <= 'Z') {
            uppercase++;
        } else if (ch >= 'a' && ch <= 'z') {
            lowercase++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            special++;
        }
    }

    cout << "\nPassword Analysis:\n";
    cout << "Length: " << length << " characters\n";
    cout << "Uppercase: " << uppercase << "\n";
    cout << "Lowercase: " << lowercase << "\n";
    cout << "Digits: " << digits << "\n";
    cout << "Special chars: " << special << "\n";

    if (length >= 8 && uppercase > 0 && lowercase > 0 && digits > 0 && special > 0) {
        cout << "Strength: STRONG\n";
        cout << "Recommendation: Password meets all security criteria!\n";
    } else {
        cout << "Strength: WEAK\n";
        cout << "Recommendation: Password should have at least 8 characters with uppercase, lowercase, digits, and special characters.\n";
    }

    return 0;
}
*/


