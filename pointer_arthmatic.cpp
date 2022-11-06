#include<iostream>

using namespace std;

int main(){
    int marks[] = {45, 89, 78, 65, 69} ;
    
    //now p stores the address of marks[0]
    int *p = marks;


    cout<<endl;
    //so we can loop through *p to print location of each mark in array

    for (int i = 0; i < 5; i++)
    {
        cout<<"This is the address of marks["<<i<<"]: "<<(p + i)<<endl;
        cout<<"This is the value of marks["<<i<<"]: "<<*(p + i)<<endl;
        cout<<endl;
    }
    
    return 0;
}