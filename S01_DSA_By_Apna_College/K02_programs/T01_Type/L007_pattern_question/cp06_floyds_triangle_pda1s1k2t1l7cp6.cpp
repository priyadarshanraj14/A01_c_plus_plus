// (L7) pattern_question 
// (CP6) Question :- print a floyd's triangle for a given value of n?

// example :-

// enter the size of floyds triangle N=5
// 1     
// 2 3   
// 4 5 6 
// 7 8 9 10
// 11 12 13 14 15

// code:-

#include<iostream>
using namespace std;
int main () 
{
    int count=0,n;
    cout<<"enter the size of floyds triangle N (natural number)=";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
           count++;
           cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}