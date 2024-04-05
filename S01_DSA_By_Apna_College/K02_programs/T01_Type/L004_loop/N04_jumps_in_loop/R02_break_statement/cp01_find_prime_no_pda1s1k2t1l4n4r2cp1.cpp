// (L4) loop // (N4) jumps in loop // (R2) break statement
// (CP1) Question :- write a program to find if a given number is prime or not ?                  
// code :-

#include<iostream>
using namespace std;
int main ()
{
    int i,n;
    cout<<"enter a number (natural number) = ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"NOT A PRIME NUMBER"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<" prime number"<<endl;
    }
    return 0;
}