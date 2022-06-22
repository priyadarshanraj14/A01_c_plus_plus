//(L10)array data structure // (N1) 1_dimensional_array // (R3) sorting in array
//(Q6):- arrange the element of array in descending order ?
// (method 3):- insertion sort
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    cout<<"enter your numbers here=";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        int current = a[i];
        int j=i-1;
        while(a[j]<current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}