#include<iostream>
using namespace std;
int main()
{
    int i,n,fact;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1,fact=1;i<=n;i++)
    {
        fact=i*fact;
        if(i==n)
        {
            cout<<i;
            break;
        }
        cout<<i<<" * ";
    }
    cout<<" = "<<fact;
}