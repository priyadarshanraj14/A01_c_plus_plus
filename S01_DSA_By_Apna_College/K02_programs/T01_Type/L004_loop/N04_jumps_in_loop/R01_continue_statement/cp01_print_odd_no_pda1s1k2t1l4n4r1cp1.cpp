// (L4) loop // (N4) jumps in loop // (R1) continue statement
//(CP1) Question :- write a program to print all the odd number till n ?
// code :-

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter a number (natural number) = ";
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