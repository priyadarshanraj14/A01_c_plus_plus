// (L10) array (data structure) // (N2) 2_dimensional_array // (R1) introduction
// (CP1) Question :- declaration of 2D array and input- output in 2D array.

// code :-

#include<iostream>
using namespace std;
int main()
{
    // datatype, name , [total rows][total columns]
    int arr [2][3]; // declare 2D array 
    // initialisation.
    arr[0][0]=1;  // arr[row number] [column number]
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=4;
    arr[1][1]=5;
    arr[1][2]=6; 
    
    cout<<arr[0][2]<<endl; // output = 3
    return 0;
}
// 2D Array :-  arr[2][3]
/*
           column
          0   1   2
 row   0 [1] [2] [3]
       1 [4] [5] [6]

 arr[1][2] = 6;
*/