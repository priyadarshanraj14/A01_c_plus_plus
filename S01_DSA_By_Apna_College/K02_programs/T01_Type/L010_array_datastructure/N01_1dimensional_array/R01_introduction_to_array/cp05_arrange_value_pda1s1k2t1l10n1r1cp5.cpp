// (L10) array (data structure) // (N1) 1_dimensional_array // (R1) introduction
// (CP5) Question :- arrange the element of array in ascending order ?

// code :-

#include<iostream>
using namespace std;
void ascending_order (int arr[],int n);

int main ()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    int arr[n];
    cout<<"enter your numbers (integers)\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ascending_order (arr,n);
    return 0;
}

void ascending_order (int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}