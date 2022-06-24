//(L10)array data structure / (N1) 1_dimensional_array / (R5) subarray challanges
//(Q7):- (pair sum problem). check if there exist two element in an array such that 
//their sum is equal to given k ?
//(method 3) optimise approach :- 

#include<iostream>
using namespace std;
void pairsum (int arr[], int n, int k);

int main()
{
    int n;
    cout<<"how many number you will give=";
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
    cout<<endl;
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