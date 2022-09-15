//(L4) loop //(N2) while loop //(Q1) print all the natural number 
//upto given number ?
#include<iostream>
using namespace std;
int main ()
{
    int a,i=1;
    cout<<"enter the number = ";
    cin>>a;
    while (i<=a)
    {
       cout<<i<<" ";
       i=i+1;
    }
    return 0;

}