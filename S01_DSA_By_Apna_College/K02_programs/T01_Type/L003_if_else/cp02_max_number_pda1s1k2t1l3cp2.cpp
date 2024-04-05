// (L3) if else 
// (cp2) Question :- we have to find maximum of 3 given number.
// code :-

#include<iostream>
using namespace std;
int main ()
{
    int a,b,c; 
    cout<<"enter 3 number (integers) "<<endl;
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