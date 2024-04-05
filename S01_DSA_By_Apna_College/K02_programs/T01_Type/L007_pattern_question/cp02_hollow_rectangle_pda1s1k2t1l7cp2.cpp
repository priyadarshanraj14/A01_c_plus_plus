// (L7) pattern_question 
// (CP2) Question :- print a hollow rectangle pattern using 
//                   star (*) for a given value of row and column?
// example :- 
// given row=5,column=4;
// * * * * 
// *     *
// *     *
// *     *
// * * * *
// code :-

#include<iostream>
using namespace std;
int main () 
{
    int row, col;
     cout<<"row=";
    cin>>row;
    cout<<"col=";
    cin>>col;
    for(int i=1;i<=row;i++)
    {
       for(int j=1; j<=col; j++)
       {
         if( i==1 || i==row || j==1 || j==col )
         {
             cout<<"* ";
         } 
         else 
         {
            cout<<"  ";
         }
        }
        cout<<endl;
    }
    return 0;
}