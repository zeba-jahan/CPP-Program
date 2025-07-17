#include <iostream>
using namespace std;

int globalVar = 100;

void showFunctionScope() {

    int functionVar = 200;

    cout << "Inside function - globalVar: " << globalVar << endl;
    cout << "Inside function - functionVar: " << functionVar << endl;

    if (true) {
        int blockVar = 300;
        cout << "Inside block - blockVar: " << blockVar << endl;
    }

}

int main() {
    cout << "In main - globalVar: " << globalVar << endl;
    showFunctionScope();

    if (true) {
        int blockMainVar = 400;
        cout << "Inside main block - blockMainVar: " << blockMainVar << endl;
    }


}