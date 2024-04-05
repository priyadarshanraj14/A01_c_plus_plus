// (L10) array (data structure) // (N1) 1_dimensional_array // (R2) searching in array
// (CP2) Question :- return the index value of key if found in array else _1 ?
// Binary search :-

// code :-

#include<iostream>
using namespace std;
int binary_search (int hi[],int n, int key);

int main()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    cout<<"must enter the value in ascending order (integer)\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter your key=";
    cin>>key;
    cout<<binary_search(arr,n,key);
    return 0;
}

int binary_search (int hi[],int n, int key)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(hi[mid]==key)
        {
            return mid;
        }
        else if (hi[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}
//time complexity = o(log n base 2)