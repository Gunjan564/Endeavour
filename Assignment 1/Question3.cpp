//Find the sum of first natural numbers
#include <iostream>

using namespace std;

int main()
{
    int i,s,n;
    cout<<"GUNJAN"<<endl;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (i=0,s=0;i<=n;i++)
    {
        s=i+s;
    }
    
    cout<<"The sum of first "<<n;
    cout<<" natural numbers is : "<<s;

    return 0;
}
