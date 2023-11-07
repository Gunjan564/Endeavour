//sum of digits of numbers
#include<iostream>
using namespace std;
int main()
{
    int i,n,s;
    cout<<"GUNJAN"<<endl;
    cout<<"Enter a the value of n: ";
    cin>>n;
    cout<<"sum of digits of "<<n<<" is";
    s=0;
    while (n>0)
    {
        s=(n%10)+s;
        n=n/10;
    }
    cout<<" "<<s;
   
}
