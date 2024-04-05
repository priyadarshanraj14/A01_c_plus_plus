// (L10) array (data structure) // (N2) 2_dimensional_array // (R2) practice
// (CP3) Question :- Given a square matrix A and its number of row or column
//                   equal to n return the transpose of a matrix A. the transpose 
//                   of a matrix is the matrix flipped over its main diagonal, switching
//                   the row and column indices of the matrix.

// example :-    1 2 3                               1 4 7
//               4 5 6    transpose of n*n matrix    2 5 8 
//               7 8 9                               3 6 9

// solution :- swap (row,col) to  (col,row) , before 2(1,2) now (2,1)
//             swap only upper diagonal element, (col>=row) in upper triangle element.

// code :- 

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter number of rows for your square matrix\n";
    cin>>n;
    int a[n][n];
    cout<<"enter number in your ("<<n<<"*"<<n<<") matrix (integer)\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i]= temp;
        }
    }
    cout<<"transpose of a given matrix\n";
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}