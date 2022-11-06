#include<iostream>

using namespace std;

int main(){
    int a = 10;
    int *b  = &a;

    // & ---> (address of) Operator
    // * ---> (value at) dereferance operator

    cout<<"This is value stored in a: "<<a<<endl;
    cout<<"This is address of a: "<<&a<<endl;

    cout<<"This is the value stored inside of b: "<<b<<endl;
    cout<<"The value at the address stored by b: "<<*b<<endl;

    int **c = &b;

    cout<<"This is the address of b: "<<&b<<endl;
    cout<<"This is the value stored at the address of c: "<<*c<<endl;
    cout<<"This is value of a obtained by double dereference operator: "<<**c<<endl;

    cout<<"This is the value stored inside of c: "<<c<<endl;
    
    return 0;
}