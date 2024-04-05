// (L10) array (data structure) / (N1) 1_dimensional_array / (R5) subarray challanges
// (CP6) Question :- (pair sum problem). check if there exist two element in an array such that 
//                    their sum is equal to given k ?
// (method 1) :- brute force apporch

// code :-

#include<iostream>
using namespace std;
bool pairsum (int arr[], int n, int k);

int main()
{
    int n;
    cout<<"how many number you will give (size of array)=";
    cin>>n;
    int arr[n];
    cout<<"enter your number here (integers) \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the sum of any two above number or other than this=";
    cin>>k;
    if(pairsum(arr,n,k)==0)
    {
         cout<<"not found";
    }
    return 0;
}

   bool pairsum (int arr[], int n, int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<"this is the sum of index= "<<i+1<<" and "<<j+1<<endl;
                return true;
            }
        }
    }
    return false;
}
//time complexity= O(n^2)





