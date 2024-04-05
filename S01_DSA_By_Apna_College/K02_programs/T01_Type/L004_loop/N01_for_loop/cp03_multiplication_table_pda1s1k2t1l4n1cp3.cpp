// (L4) loop // (N1) for loop 
// (CP3) Question :- program to display multiplication table of given
//                   positive number upto 10?
// code :-

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number (natural number)"<<endl;
    cin>>n;
    for (int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}