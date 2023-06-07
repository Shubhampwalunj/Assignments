#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter any positive number :: ";
    cin>>i;
    
	    
    n=i%10;
    
    if(n==0 || n==1)
    {
            cout<<"\nThe entered number is a BINARY number";
            
    }
    else
    {
    	cout<<"\nThe entered number is a NOT a BINARY number ";
	}
	return 0;

}
