// (L10) array (data structure) // (N1) 1_dimensional_array // (R3) sorting in array
// (CP2) Question :- arrange the element of array in descending order ?
// (method 1) :- seletion sort

// code :-

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    cout<<"enter your numbers (integer)\n";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}