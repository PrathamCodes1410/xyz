// USE OF MANUPILATORS

#include<iostream>
#include<iomanip> // A new lib to use manupilator like 'setw'

using namespace std;

int main(){
    int a = 45, b = 745, c = 1598;

    cout<<"This is without setw a: "<<a<<endl;
    cout<<"This is without setw b: "<<b<<endl;
    cout<<"This is without setw c: "<<c<<endl;
    cout<<"\n";
    cout<<"This is with setw a:"<<setw(4)<<a<<endl;
    cout<<"This is with setw b:"<<setw(4)<<b<<endl;
    cout<<"This is with setw c:"<<setw(4)<<c<<endl;  // 4 here is length of largest number

}