//number pattern printing-Half pyramid
#include<iostream>
using namespace std;
int main()
{
    int i,r,c;
    cout<<"GUNJAN"<<endl;
    cout<<"Enter the value of r: ";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(c=1;c<i+1;c++)
        {
            cout<<c<<" ";
        } 
        cout<<endl;  
    }
    
     
}
