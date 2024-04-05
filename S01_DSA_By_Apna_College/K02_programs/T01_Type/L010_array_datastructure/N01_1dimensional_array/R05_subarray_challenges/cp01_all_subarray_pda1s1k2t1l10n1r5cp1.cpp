// (L10) array (data structure) // (N1) 1_dimensional_array // (R5) subarray challanges
// (CP1) Question :- print all possible subarray ?

// code :-

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many number you will give (size of array)=";
    cin>>n;
    cout<<"enter your number here (integer) \n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"all your possible subarray\n";
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"{ ";
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<", ";
            }
            cout<<"}"<<endl;
        }
    }
    return 0;
}