// (L10) array (data structure) // (N1) 1_dimensional_array // (R1) introduction
// (CP4) Question :- find maximum and minimum value in an array?

// code :-

#include<iostream>
#include<climits> // this header file used fot INT_MIN and INT_MAX,also for max and min function.
using namespace std;
int main()
{
    int n;
    cout<<"how many number you want to enter =";
    cin>>n;
    cout<<"enter your number (integers)\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxno=INT_MIN;//INT_MIN= minimum value possible in c++.
    int minno=INT_MAX;//INT_MAX= maxium value possible in c++.
    for(int i=0;i<n;i++)
    {
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<"max="<<maxno<<" , "<<"min="<<minno;
    return 0;
}