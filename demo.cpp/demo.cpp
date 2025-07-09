/*#include <iostream>
using namespace std;
int main(){
    cout << "hello";
    return 0;
}*/

//EVEN OR ODD
/*#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a num: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "even";
    } else {
        cout << "odd ";
    }
    return 0;
}
*/

//PRIME NUMBER
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1)
        cout << "Not Prime";
    else if (n == 2)
        cout << "Prime";
    else if (n % 2 == 0)
        cout << "Not Prime";
    else
        cout << "Prime"; 

    return 0;
}
*/

/*#include <iostream>
using namespace std;

int main() {
    float a, b;
    int choice;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    

    switch (choice) {
        case 1:
            cout << "Result = " << a + b << endl;
            break;
        case 2:
            cout << "Result = " << a - b << endl;
            break;
        case 3:
            cout << "Result = " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Cannot divide by zero!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    if((a>b) && (a>c))
    cout << "a";

    else if ((b>a) && (b>c))
    cout << "b";

    else 
    cout << "c";

}
*/

/*#include <iostream>
using namespace std;
int main(){
    int year;
    cin >> year;

    if ((year%4==0) && (year%100!=0) || (year%400==0))
    cout << "Leap Year";

    else
    cout <<"Not Leap Year";
}
*/

/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    if (n>=90)
    cout << "A";

    else if ((n<90)&&(n>=80))
    cout << "B";

    else if ((n<80)&&(n>=70))
    cout << "C";

    else if ((n<70)&&(n>=60))
    cout << "D";

    else 
    cout << "F";
}
*/

/*#include <iostream>
using namespace std;
int main (){
    char Ch;
    cin >> Ch;

    if ((Ch=='a'|| Ch=='e' || Ch=='i' || Ch=='o'|| Ch=='u') || (Ch=='A'|| Ch=='E'|| Ch=='I'|| Ch=='O'|| Ch=='U'))
    cout << "Vowel";

    else 
    cout << "Consonant";
    
}
*/

#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;

    if (ch>='0'&&ch<='9')
    cout << "Digit";

    else if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    cout << "Character";

    else
    cout << "Special character";

}

