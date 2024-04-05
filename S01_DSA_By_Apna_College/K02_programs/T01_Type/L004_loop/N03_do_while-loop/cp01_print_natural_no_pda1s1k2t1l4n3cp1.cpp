// (L4) loop // (N3)do while loop 
// (CP1) Question :- print all the natural number upto given number?
// code :-

#include<iostream>
using namespace std;
int main ()
{
    int a,i=1;
    cout<<"enter a number (natural number)= ";
    cin>>a;
    do
    {
        cout<<i<<" ";
        i=i+1;
    }
    while (i<=a);
    return 0;
}