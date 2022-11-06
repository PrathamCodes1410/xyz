#include <iostream>

using namespace std;

int glo = 15; // declaring a global variable
void sum()
// adding two variable in c++
{
    int a = 5;
    int b = 6;
    int add = a + b;
    
    cout<<"\nThe addition of this two variable is "<<add;
}

int main()
{
    int global = 78;   // local variable is preferd over the global variable in the same fucntion
    int a = 5, b = 16;

    bool d = true;
    char c = 'd';

    cout<<global;
    sum();  // calling sum function

    cout<<"\nWe have a variable named "<<a<<" \nand this another one valued at "<<b;
    //entering values inside of the string
    cout<<"\nValue of our char is "<<c;

}