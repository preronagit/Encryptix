#include<iostream>
using namespace std;
int main()
{
    double num1,num2,result;
    int choice;
    cout<<"Input any two numbers :\n";
    cin>>num1>>num2;
    cout<<"The operations are as follows :\n";
    cout<<"1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n";
    cout<<"Please choose an operation :\n";
    cin>>choice;
    switch(choice){
        case 1:result=num1+num2;
        cout<<"The addition of "<<num1<<" and "<<num2<<" gives "<<result<<endl;
        break;
        case 2:result=num1-num2;
        cout<<"The subtraction of "<<num1<<" and "<<num2<<" gives "<<result<<endl;
        break;
        case 3:result=num1*num2;
        cout<<"The multiplication of "<<num1<<" and "<<num2<<" gives "<<result<<endl;
        break;
        case 4:result=num1/num2;
        cout<<"The division of "<<num1<<" and "<<num2<<" gives "<<result<<endl;
        break;
        default:"Oops! Your choice is invalid.";
    }
    return 0;
}