#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	
	int test;
	cin>>test;
	
	for(int i = 0; i < test; i++)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if(x % y == 0)
	    {
	        cout<<x/y<<endl;
	    }
	    else
	    {
	        cout<<(round(x/y))+(x%y)<<endl;
	    }
	}
    return 0;
}
