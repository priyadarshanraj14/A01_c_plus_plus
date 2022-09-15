//(L4) loop //(N4) jumps in loop // (R2) break statement
//(Q1) write a program to find if a given number is prime or not ?
#include<iostream>
using namespace std;
int main ()
{
    int i,n;
    cout<<"enter a number = ";
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