// (L4) loop // (N2) while loop 
// (CP1) Question :-  print all the natural number upto given number ?
// code :-

#include<iostream>
using namespace std;
int main ()
{
    int a,i=1;
    cout<<"enter the number (natural number) = ";
    cin>>a;
    while (i<=a)
    {
       cout<<i<<" ";
       i=i+1;
    }
    return 0;

}