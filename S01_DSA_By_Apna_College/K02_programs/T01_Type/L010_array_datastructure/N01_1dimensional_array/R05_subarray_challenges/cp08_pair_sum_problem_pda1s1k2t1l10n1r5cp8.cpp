//(L10)array (data structure) / (N1) 1_dimensional_array / (R5) subarray challanges
//(CP7) Question :- (pair sum problem). check if there exist two element in an array such that 
//their sum is equal to given k ?
// code :- (method 3) optimise approach 

#include<iostream>
using namespace std;
void pairsum (int arr[], int n, int k);

int main()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the sum of any two above number or other than this=";
    cin>>k;
    // sorting of array in ascending order
    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"(this is sorted form)\n";
    pairsum (arr,n,k);
}

void pairsum (int arr[], int n, int k)
{
    int lowpointer=0,highpointer=n-1;
    while(lowpointer<highpointer)
    {
        if(arr[lowpointer]+arr[highpointer]==k)
        {
            cout<<k;
            cout<<" is the sum of index= "<<lowpointer+1<<" and "<<highpointer+1;
            cout<<" (according to sorted form)\nthankyou\n\n";
            return;
        }
        else if (arr[lowpointer]+arr[highpointer]>k)
        {
            highpointer--;
        }
        else
        {
            lowpointer++;
        }   
    }
    cout<<k<<" is not the sum of any two given number\n thankyou\n\n";
    return;
}