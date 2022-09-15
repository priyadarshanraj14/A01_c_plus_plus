//(L10)array data structure // (N1) 1_dimensional_array // (R1) introduction
//(Q3):- taking input by user in an array.
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    // taking input
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // printing output
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}