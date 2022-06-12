//(L7) pattern_question//(Q1) print a rectangle pattern using star (*) for a 
//given value of row and column?
//output- 
// given row=10,column=8;
// * * * * * * * * 
// * * * * * * * * 
// * * * * * * * * 
// * * * * * * * * 
// * * * * * * * *
// * * * * * * * *
// * * * * * * * *
// * * * * * * * *
// * * * * * * * *
// * * * * * * * *
#include<iostream>
using namespace std;
int main () 
{
    int row, col;
    cout<<"row=";
    cin>>row;
    cout<<"col=";
    cin>>col;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
