//(L10)array (data structure) / (N1) 1_dimensional_array / (R5) subarray challanges
//(CP4) Question :- find the subarray in an array which has maximum sum ?
// code :- (method 3) optimized approach :- kadanes algorithm 
#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    cout<<"enter your number here\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"maximum subarray sum\n";
    int maxsum=INT_MIN;
    int currentsum=0;
    for(int i=0;i<n;i++)
    {
        currentsum+=arr[i];
        maxsum=max(maxsum,currentsum);
        if(currentsum<0)
        {
            currentsum=0;
        }
    }
    cout<<maxsum;
    return 0;
}
// time complexity =O(n)