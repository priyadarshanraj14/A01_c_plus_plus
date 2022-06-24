//(L10)array data structure // (N1) 1_dimensional_array // (R1) introduction
//(Q7) testing:- no need to return the value of sorted array to our main function.

#include<iostream>
using namespace std;
void arrange (int arr[], int n,int k);

int main()
{
    int arr[]={10,50,40,20,30};
    int k=10;
    arrange(arr,5,k);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "; // 10 20 30 40 50 
        
    }
    cout<<endl<<k; // 10 (no change)
    return 0;
}

// arranging array in increasing order

 void arrange (int arr[], int n,int k)
{
    int current;
    for(int i=1;i<n;i++)
    {
        current=arr[i];
        int j=i-1;
        while(current<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    k=k*2;
    return;
}
