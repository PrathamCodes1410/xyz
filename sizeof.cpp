#include<iostream>

using namespace std;

int main()
{
    float d = 34.4;
    long double l = 34.4;

    cout<<"The size of 34.4 is "<<sizeof(34.4);
    cout<<"\nThe size of 34.4f is "<<sizeof(34.4f);  // f/F is used after int to make it into float
    cout<<"\nThe size of 34.4F is "<<sizeof(34.4F);  
    cout<<"\nThe size of 34.4l is "<<sizeof(34.4l); // l/L is uesd after int to make it into long double
    cout<<"\nThe size of 34.4L is"<<sizeof(34.4L);

    
}