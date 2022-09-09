//(L10)array data structure // (N1) 1_dimensional_array // (R4) array challenges
//(Q2):-(All subarray sum). Given an array a[] of size n, output sum of each 
//subarray of the given array.
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    int arr[n];
    cout<<"enter your number\n";
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
