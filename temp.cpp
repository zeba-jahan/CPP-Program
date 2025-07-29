#include<iostream>
using namespace std;
int main(){
    int temp, c, f, k;
    char unit;
    cout<<"Enter temperature: ";
    cin>>temp;
    cout<<"Enter (C/F/K): ";
    cin>>unit;

    if(unit=='C' || unit =='c'){
        c=temp;
        f=(c*9/5)+32;
        k=c+273.15;
    }
    else if(unit == 'F' || unit == 'f'){
        f=temp;
        c=(k-32)*5/9;
        k=c+273.15;
    }
    else if(unit == 'K' || unit== 'k'){
        k=temp;
        c=k-273.15;
        f=(c*9/5)+32;
    }
    else{
        cout<<"Invalid unit: ";
    }

    cout<<"Original: "<<c<<"C"<<endl;
    cout<<"fahrenheit: "<<f<<"F"<<endl;
    cout<<"Kelvin: "<<k<<"K"<<endl;
    




}