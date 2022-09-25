#include<iostream>
using namespace std;

int fact(int a)
{
       int fact=1;
       for (int i=2; i<=a; i++)
           fact = fact * i;
    return fact;
}

int main()
{
    int a,ans;
    cout<<"Enter a positive integer = ";
    cin>>a;
    ans = fact(a);
    cout<<"Your factorial output is = "<<ans<<endl;
}

