#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"What is your age? "<<endl;
    cin>>age;

    switch (age > 18)
    {
    case true:
        cout<<"Yes, you are eligible"<<endl;
        break;
    
    default:
    cout<<"You are not eligible"<<endl;
        
    }
}