//(L10)array data structure // (N1) 1_dimensional_array // (R4) array challenges
/*
(CP7) question :- (smallest positive missing number)
you are given an array[] of N integers including 0. the task is to find the 
smallest positive number missing from the array.
(question asked in accolite, amazon, sumsung, snapdeal)

constraints:-  1<=N<=10^4;    -10^-4<=Ai<=10^4

example :-  
   input  :-   {0,-9,1,3,-4,5}
   output :-   2
   explanation :- here first positive missing number is 2.
*/
// code :-
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    cout<<"constraints:-  1<=N<=10^4;    -10^-4<=Ai<=10^4"<<endl;
    int n;
    cout<<"enter the size of array\nN=";
    cin>>n;
    int a[n];
    cout<<"enter your all "<<n<<" number in array 'Ai'"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int m=1e4+2;  // 1e4=10^4
    bool check[m];
    for(int i=0;i<m;i++)
    {
        check[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            check[a[i]]=true;
        }
    }
    int ans=-1;
    for(int i=1;i<m;i++)
    {
        if(check[i]==false)
        {
            ans=i;
            cout<<i<<endl;
            break;
        }
    }
    if(ans==-1)
    {
        cout<<"not found"<<endl;
    }
    return 0;
}