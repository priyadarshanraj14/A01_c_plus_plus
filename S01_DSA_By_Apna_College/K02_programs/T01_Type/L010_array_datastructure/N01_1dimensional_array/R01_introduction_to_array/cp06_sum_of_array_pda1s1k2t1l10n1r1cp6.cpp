// (L10) array (data structure) // (N1) 1_dimensional_array // (R1) introduction
// (CP6) Question :- find the sum of all the value of an array?

// code :-

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"how many number you will enter =";
    cin>>n;
    cout<<"enter your number (integers)=";
    int hellow[n];
    for(int i=0;i<n;i++)
    {
        cin>>hellow[i];
        sum+=hellow[i];
    }
    cout<<sum;
    return 0;
}