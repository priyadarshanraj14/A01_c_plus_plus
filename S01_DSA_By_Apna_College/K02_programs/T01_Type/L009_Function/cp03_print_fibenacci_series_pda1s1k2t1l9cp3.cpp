// (L9) Function
// (CP3) Question :- print fibenacci series from given two number?
//                   the next term of fibenacci series is the sum of 
//                   privious two number.

// code :- 

#include<iostream>
using namespace std;

void fib (int a, int b)      // void means empty no value will return.
{
    int n,l;
    cout<<"enter value of total number of term n (natural number)=";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cout<<a<<" ";
       l=a;
       a=b; 
       b=b+l;
    }
    return;
}

int main ()
{
    int a,b; 
    cout<<"fibenacci series- enter value for a (integers)=";
    cin>>a;
    cout<<"b (integers)=";
    cin>>b; 
    fib(a,b);
    return 0;
}

