//(L4) loop //(N4) jumps in loop // (R1) continue statement
//(Q1) write a program to print all the odd number till n ?
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter a number = ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<i<<"  ";
    }
    return 0;
}