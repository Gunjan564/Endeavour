//square pattern printing
#include<iostream>
using namespace std;
int main()
{
    int i,r;
    cout<<"GUNJAN"<<endl;
    for(i=1;i<5;i++)
    {
        for(r=1;r<5;r++)
            {
                if((i==2&&r==2)||(i==2&&r==3)||(i==3&&r==2)||(i==3&&r==3))
                {
                    cout<<"  ";
                    continue;
                }
                cout<<"* ";
            }
            cout<<endl;    
    }
}