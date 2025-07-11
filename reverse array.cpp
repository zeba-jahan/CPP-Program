#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 30, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
