//(L4) loop //(N1) for loop //(Q1) program to find sum of all 
//natural number till n?
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter a number = ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}