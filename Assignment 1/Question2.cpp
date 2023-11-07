/*Check whether the number is positve or negative integer using nested if else*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"GUNJAN"<<endl;
    cout<<"Enter the value of integer a: ";
    cin>>a;
    if (a>0)
    {
        cout<<"a is a positive integer";
    }
    else
    {
        if(a==0)
        {
            cout<<"a is zero integer";
        }
        else
        {
            cout<<"a is a negative integer";   
        }
    }

}
