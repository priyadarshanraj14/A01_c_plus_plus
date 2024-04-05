// (L10)array (data structure) // (N2) 2_dimensional_array // (R1) introduction
// (CP2) Question :- declaration and initialisation and input- output in 2D array.

// code :-

#include<iostream>
using namespace std;
int main ()
{
    //declaration and initialisation
    int arr [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<",";
        }
    }
    return 0;
}