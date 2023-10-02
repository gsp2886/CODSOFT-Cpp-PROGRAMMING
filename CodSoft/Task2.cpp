//  Develop a calculator program that performs basic arithmetic
//  operations such as addition, subtraction, multiplication, and
//  division. Allow the user to input two numbers and choose an
//  operation to perform.

#include<iostream>
using namespace std;

int main()
{
    char operation;
    cout<<"Press + for addition"<<endl<<"Press - for subtraction"<<endl<<"Press * for multiplication"<<endl<<"Press / for division"<<endl<<"Press % for Modulus"<<endl<<endl;
    cout<<"Enter your choice "<<endl;
    cin>>operation;

    double num1,num2;

    cout<<"Enter 1st number "<<endl;
    cin>>num1;
    cout<<"Enter 2nd number "<<endl;
    cin>>num2;

    switch(operation)
    {
    case '+':
        cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<num1+num2;
        break;
    case '-':
        cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2;
        break;
    case '*':
        cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<num1*num2;
        break;
    case '/':
        cout<<"Division of "<<num1<<" and "<<num2<<" is "<<num1/num2;
        break;
    default:
        cout<<"Error! operator is not correct";
    }

    return 0;
}

