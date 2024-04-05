// (L10) array (data structure) / (N1) 1_dimensional_array / (R5) subarray challanges
// (CP2) Question :- find the subarray in an array which has maximum sum ?
// (method 1) :- brute force approach

// code :-

#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int n;
    cout<<"how many number you will give (size of array)=";
    cin>>n;
    cout<<"enter your number here (integers) \n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"maximum subarray sum\n";
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
    return 0;
}
//time complexity = O(n^3).
