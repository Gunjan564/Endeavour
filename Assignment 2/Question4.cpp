//Find the sum of first natural numbers
#include <iostream>
using namespace std;
int main()
{
    int i,s,n;
    cout<<"GUNJAN"<<endl;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (i=1,s=0;i<=2*n-1;i=i+2)
    {
        s=i+s;
    }    
    cout<<"The sum of first "<<n;
    cout<<" ODD natural numbers is : "<<s;
    return 0;
}
