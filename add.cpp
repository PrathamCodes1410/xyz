#include <iostream>

using namespace std;

int c = 69;

int main()
{
    int num1, num2;
    cout<<"Enter the value of number 1: "; /* This "<<" is known as insertion operator*/
    cin>>num1; /* This ">>" is known as extraction operator*/

    cout<<"Enter the value of number 2: ";
    cin>>num2;
    int c = num1 + num2;
    cout<<"The sum is "<<c;

    cout<<"\nThe global c variable is "<<::c; /* "::" is known as scope resolution operator*/
}
