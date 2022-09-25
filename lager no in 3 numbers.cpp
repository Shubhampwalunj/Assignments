//Find the largest number of three inputs

#include<iostream>
using namespace std;

int main()
{
    int a,b,c; // 3,8,7
    cout<<"Enter 1st number";
    cin>>a;
    cout<<"Enter 2nd number";
    cin>>b;
    cout<<"Enter 3rd number";
    cin>>c;
    
    if(a>=b && a>=c)
    {
        cout<<"The largest number is = "<<a;
    }
    if(b>=a && b>=c)
    {
        cout<<"\nThe largest number is = "<<b;
    }
    cout<<"The largest number = "<<c;
    return 0;
}

