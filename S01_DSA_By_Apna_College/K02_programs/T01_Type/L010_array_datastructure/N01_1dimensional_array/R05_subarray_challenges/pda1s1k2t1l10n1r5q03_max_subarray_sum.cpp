//(L10)array data structure / (N1) 1_dimensional_array / (R5) subarray
//challanges /(Q3):- find the subarray in an array which has maximum sum ?
//(method 2) optimized approach :- cumulative sum approach
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
    int currsum [n+1];
    currsum[0]=0;
    for(int i=0;i<n;i++)
    {
        currsum[i+1]=currsum[i]+arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum=currsum[i]-currsum[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
    return 0;
}
//time complexity=O(n^2).