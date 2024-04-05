// (L10) array (data structure) // (N2) 2_dimensional_array // (R2) practice
// (CP2) Question :- print the matrix in spiral order  ?

// example :-          1  20 7
//                     20 6  5
//                     8  19 20
//   spiral order :- 1 20 7 5 20 19 8 20 6

// code :-
 #include<iostream>
 using namespace std;
 int main ()
 {
    int r,c;
    cout<<"enter number of rows and columns of your matrix =";
    cin >>r>>c;
    int arr[r][c];
    cout<<"enter the number in your ("<<r<<"*"<<c<<")matrix (integer)";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int row_start =0, column_start=0,row_end=r-1,column_end=c-1;
    while(row_start<=row_end && column_start<=column_end)
    {
    for(int i=column_start;i<=column_end;i++)
    {
       cout<<arr[row_start][i]<<" ";
    }
    row_start++;
    for(int i=row_start;i<=row_end;i++)
    {
        cout<<arr[i][column_end]<<" ";
    }
    column_end--;
    for(int i=column_end;i>=column_start;i--)
    {
        cout<<arr[row_end][i]<<" ";
    }
    row_end--;
    for(int i=row_end;i>=row_start;i--)
    {
        cout<<arr[i][column_start]<<" ";
    }
    column_start++;
    }
    return 0;
 }
