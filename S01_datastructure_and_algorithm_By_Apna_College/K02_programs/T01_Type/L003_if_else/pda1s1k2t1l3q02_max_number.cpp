// (L3) if else // (Q2) we have to find maximum of 3 given number.
#include<iostream>
using namespace std;
int main ()
{
    int a,b,c; 
    cout<<"enter 3 number"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<endl; 
        }
        else
        {
            cout<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
        
    }
    return 0;
}