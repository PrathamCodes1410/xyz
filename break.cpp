#include<iostream>

using namespace std;

int main(){
    for(int i = 0; i < 40; i++)
    {
        if (i == 10)
        {
            // break is used in if  to stop the the running loop, it breaks loop before 10
            //thus, nums from 0 to 9 are printed.
            break;
        }
        cout<<i<<endl;
        
    }
    return 0;
}