#include <iostream>
#include <climits>   
#include <cfloat>    
using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;


    cout << "Signed int: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "Unsigned int: 0 to " << UINT_MAX << endl;

    cout << "Signed short: " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "Unsigned short: 0 to " << USHRT_MAX << endl;

    cout << "Signed long: " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "Unsigned long: 0 to " << ULONG_MAX << endl;

    cout << "Signed long long: " << LLONG_MIN << " to " << LLONG_MAX << endl;
    cout << "Unsigned long long: 0 to " << ULLONG_MAX << endl;

    
    int intVal = 65;
    float floatVal = 3.14159;
    char charVal = 'A';

    cout << "Integer value: " << intVal << endl;
    cout << "Casting int to char: " << static_cast<char>(intVal) << endl;

    cout << "Float value: " << floatVal << endl;
    cout << "Casting float to int: " << static_cast<int>(floatVal) << endl;

    cout << "Char value: " << charVal << endl;
    cout << "Casting char to int (ASCII): " << static_cast<int>(charVal) << endl;

    return 0;
}
