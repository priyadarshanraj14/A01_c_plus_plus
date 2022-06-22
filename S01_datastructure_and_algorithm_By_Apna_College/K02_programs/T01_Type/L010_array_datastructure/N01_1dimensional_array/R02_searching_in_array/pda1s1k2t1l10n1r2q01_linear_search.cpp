//(L10)array data structure // (N1) 1_dimensional_array // (R2) searching in array
//(Q1):- return the index value of key if found in array else _1 ?
// (linear search) :-
#include<iostream>
using namespace std;
int linear_search (int arr[],int key, int n)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linear_search(arr,key,n);
    return 0;
}