#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"\nNumber analysis for:"<<num<<":\n";

    if(num %2==0){
        cout<<"Even: Yes\n";
    }
    else{
        cout<<"Even: No\n";
    }

    if(num > 0){
        cout<<"Positive: Yes\n";
    }
    else{
        cout<<"Positive: No\n";
    }

    if (num % 3== 0){
        cout<<"Multiple of 3: Yes\n";
    }
    else{
        cout<<"Multiple of 3: No\n";
    }

    if (num % 5==0){
        cout<<"Multiple of 5: Yes\n";
        
    }
    else {
        cout<<"Multiple of 5: No\n";

    }

    if (num %3==0 && num % 5==0){
        cout<<"Multiple of 3 or 5: yes\n";
    }
    else{
        cout<<"Multiple of 3 or 5: No\n";
    }

    if (num >=-9 && num <=9){
        cout<<"Single digits: Yes\n";    
    }
    else{
        cout<<"Single digits: No\n"; 
    }

}