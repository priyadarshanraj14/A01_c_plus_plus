// (L7) pattern_question 
// (CP3) Question :- print a inverted half pyramid using 
//                   star (*) for a given value of n?
// example :- 

// given n=5;
// * * * * * 
// * * * *   
// * * *     
// * *       
// *

// code :-

#include<iostream>
using namespace std;
int main () 
{
    int row, col, n;
    cout<<"n (natural number)=";
    cin>>n;
    row=n;
    for(int i=row; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}