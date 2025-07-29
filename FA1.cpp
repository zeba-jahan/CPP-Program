#include<iostream>
using namespace std;
int main(){
    int id,experience;
    string name;
    float basicsalary, bonus, total;

    cout<<"Enter Employee ID: ";
    cin>>id;

    cout<<"Enter years of Employee Experience: ";
    cin>>experience;

    cout<<"Enter  Employee Name: ";
    cin.ignore();
    getline(cin, name);

    cout<<"Enter Employee Salary: ";
    cin>>basicsalary;

    if (experience<=2){
        bonus=0.05*basicsalary;

    }
    else if(experience<=5){
        bonus=0.10*basicsalary;
    }
    else{
        bonus=0.15*basicsalary;
    }

    total=basicsalary+bonus;

    cout<<"--Employee Details--"<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Experience: "<<experience<<endl;
    cout<<"Basic Salary: "<<basicsalary<<endl;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Total Salary"<<endl;
    

}
