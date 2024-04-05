// (L3) if else 
// (CP1) Question :- to find the given number is odd or even. (if/else)
// code :-

#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"enter a number (natural number) =";
    cin>>a;
    if(a%2==0)
    {
        cout<<"even number\n";
    }
    else
    {
        cout<<"odd number\n";
    }
    return 0;
}