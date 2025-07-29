// #include <iostream>
// int subtract(const int* a, const int* b) {
//     return (*a) - (*b);
// }

// int main() {
//     int x = 10, y = 4;
//     int result = subtract(&x, &y);
//     std::cout << "Result of " << x << " - " << y << " = " << result << std::endl;
//     return 0;
// }

//FUNCTION OVERLOADING.
// #include<iostream>
// void print(int x){
//     std::cout<<"Int:"<<x<<std::endl;
// }
// void print(double x){
//     std::cout<<"double: "<<x<<std::endl;
// }

// int main(){
//     print(5);
//     print(3.5);
//     return 0;
// }


//CALL BY VALUE.
// #include<iostream>
// void change(int num){
//     num=10;
//     std::cout<<num<<std::endl;
// }
// int main(){
//     int x=5;
//     change(x);
//     // std::cout<<x<<std::endl;
//     return 0;
// }

//CALL BY REFERENCE.
// #include<iostream>
// void change(int &x){
//     x=10;
    
// }
// int main(){
//     int num=5;
//     change(num);
//      std::cout<<num<<std::endl;
//     return 0;
// }

//CALL BY POINTER.
// #include<iostream>
// void change(int *x){
//     *x=10;
    
// }
// int main(){
//     int num=5;
//     change(&num);
//      std::cout<<num<<std::endl;
//     return 0;
// }

//RETURN BY REFERENCE.
// #include<iostream>
// int& getFirst(int arr[], int size){
//     return arr[0];
// }
// int main(){
//     int data[3]={1,2,3};
//     getFirst(data, 3)=99;
//     std::cout<<data[0]<<std::endl;
//     return 0;
// }

//1st
// #include<iostream>
// void fun(int x){x+=5;}
// int main(){
//     int a=10;
//     fun(a);
//     std::cout<<a<<std::endl;
// }

//2nd.
// #include<iostream>
// void swapNums(int &a, int &b) {
// int temp=a;
// a=b;
// b=temp;
// }
// int main() {
// int x = 3, y = 8;
// swapNums(x, y);
// std::cout << x << " " << y << std::endl;
// return 0;
// }

//3rd.
// #include<iostream>
// void doubleValue(int *x) {
// *x = *x * 2;
// }
// int main() {
// int num = 11;
// doubleValue(&num);
// std::cout << num << std::endl;
// return 0;
// }

//4th.
#include<iostream>
int& largest(int arr[], int size) {
    int maxIndex=0;

    for (int i=1; i<size; i++){
        if (arr[i]>arr[maxIndex]){
            maxIndex=i;
        }
    }
    return arr[maxIndex];

}
int main() {
int data[5] = {4, 1, 7, 3, 2};
std::cout << "Before: ";
for(int i=0;i<5;i++) std::cout << data[i] << " ";
std::cout << std::endl;
largest(data, 5) = 0;
std::cout << "After: ";
for(int i=0;i<5;i++) std::cout << data[i] << " ";
std::cout << std::endl;
return 0;
}