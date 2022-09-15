//(L10)array data structure / (N1) 1_dimensional_array / (R5) subarray
//challanges /(Q5):- (maximum circular subarray sum).find the circular or noncircular
// subarray in an array which has maximum sum ?

#include<iostream>
#include<climits>
using namespace std ;
int kadanes (int arr[], int n);

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
    cout<<"maximum circular subarray sum\n";
    int maxsum=INT_MIN;
    int noncircular,circular,totalsum=0;
    noncircular=kadanes(arr,n);
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    circular=totalsum+kadanes(arr,n);
    maxsum=max(circular,noncircular);
    cout<<maxsum;
    return 0;
}

int kadanes (int arr[], int n)
{
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentsum+=arr[i];
        maxsum=max(maxsum,currentsum);
        if(currentsum<0)
        {
            currentsum=0;
        }
    }
    return maxsum;
}