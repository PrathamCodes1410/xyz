#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"What is you age? "<<endl;
    cin>>age;

    if (age > 18)
    {
        cout<<"You are eligible"<<endl;
    }
    else if((age > 16) && (age <= 18))
    {
        cout<<"You are eligible with parents"<<endl;
    }
    else{
        cout<<"You are ineligible"<<endl;
    }
}