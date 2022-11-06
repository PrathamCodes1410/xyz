#include<iostream>

using namespace std;

int main(){
    //making an array p1
    int Math[] = {23,10,45,889};
    

    //making an array p2
    int Math2[4];
    Math2[0] = 25;
    Math2[1] = 45;
    Math2[2] = 69;
    Math2[3] = 78;
    
    //printing an array
    cout<<"simply printing an array"<<endl;
    cout<<Math[0]<<endl;
    cout<<Math[1]<<endl;
    cout<<Math[2]<<endl;
    cout<<Math[3]<<endl;

    cout<<endl;

    //printing an array with help of for loops
    for (size_t i = 0; i < 4; i++)
    {
        cout<<"This number "<<i<<" of Math2 array with for loop "<<Math2[i]<<endl;
    }

    cout<<endl;
    //printing an array with help of while loops
    int j = 0;
    while (j < 4)
    {
        cout<<"Printed this array with while loop"<<Math[j]<<endl;
        j++;
    }

    cout<<endl;

    cout<<"Printing an array with do while loop"<<endl;

    return 0;
}