#include<iostream>

using namespace std;

int main()
{
    int a = 45;
    int & y = a;  // here y is referance variable of a

    cout<<"The value is "<<y;
}
