// (L10)array (data structure) // (N1) 1_dimensional_array // (R2) searching in array
// (CP1) Question :- return the index value of key if found in array else _1 ?
// (linear search) :-

// code :-

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
    cout<<"how many number you will enter =";
    cin>>n;
    cout<<"enter your number below (ineteger)\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"\nkey=";
    cin>>key;
    cout<<linear_search(arr,key,n);
    return 0;
}