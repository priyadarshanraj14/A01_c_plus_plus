// (L10) array data structure // (N1) 1_dimensional_array // (R4) array challenges
// (CP2) Question:-(All subarray sum). Given an array a[] of size n, output  
//                  sum of each subarray of the given array.

// example :-  input -    1 2 3  output - 1,3,6,2,5,3
//                        {1,}=1
//                        {1,2,}=3
//                        {1,2,3,}=6
//                        {2,}=2
//                        {2,3,}=5
//                        {3,}=3

// code :-

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    int arr[n];
    cout<<"enter your number (integer)\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int currentsum=0;
        for(int j=i;j<n;j++)
        {
            currentsum+=arr[j];
            cout<<"{";
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<"}="<<currentsum<<endl;
        }
    }
    return 0;
}
