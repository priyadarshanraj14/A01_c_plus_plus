//(L10)array (data structure) / (N1) 1_dimensional_array / (R5) subarray challanges
//(CP7) Question :- (pair sum problem). check if there exist two element in an array such that 
//their sum is equal to given k ?
// code :- (method 2) optimise approach :- if the array are sorted in increasing order

#include<iostream>
using namespace std;
void pairsum (int arr[], int n, int k);

int main()
{
    int n;
    cout<<"hoe many number you will give=";
    cin>>n;
    int arr[n];
    cout<<"must enter your number here in ascending order\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the sum of any two above number or other than this=";
    cin>>k;
    pairsum (arr,n,k);
}

void pairsum (int arr[], int n, int k)
{
    int lowpointer=0,highpointer=n-1;
    while(lowpointer<highpointer)
    {
        if(arr[lowpointer]+arr[highpointer]==k)
        {
            cout<<"this is the sum of index= "<<lowpointer+1<<" and "<<highpointer+1<<endl;
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
    cout<<"not found  must enter your number in increasing order";
    return;
}
//time complexity = O(n)