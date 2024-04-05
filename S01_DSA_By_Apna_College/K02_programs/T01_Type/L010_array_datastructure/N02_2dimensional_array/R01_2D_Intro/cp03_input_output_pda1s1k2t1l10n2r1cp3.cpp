// (L10)array (data structure) // (N2) 2_dimensional_array // (R1) introduction
// (CP3) Question :- user input- output in 2D array.

// code :-

#include<iostream>
using namespace std;
int main ()
{
    int n,m;
    cout<<"enter the number of  row and column of your matrix";
    cin>>n>>m;
    cout<<" enter the numbers (row*col) in your matrix (integer)";
    int arr [n][m]; // declare 2D Array
    //taking input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing output
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<",";
        }
    }
    return 0;
}