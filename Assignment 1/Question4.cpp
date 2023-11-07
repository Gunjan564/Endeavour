//find the Factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int n,i,f;
    cout<<"GUNJAN"<<endl;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(f=1,i=1;i<=n;i++)
    {
        f=f*i;
        if (i==n)
        {
            cout<<i;
            break;
        }
        cout<<i<<"*";
    }
    cout<<"="<<f;
   
     
}