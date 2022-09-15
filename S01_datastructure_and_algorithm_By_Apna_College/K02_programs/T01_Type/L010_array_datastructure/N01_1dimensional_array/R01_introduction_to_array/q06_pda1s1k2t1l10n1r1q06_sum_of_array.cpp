//(L10)array data structure // (N1) 1_dimensional_array // (R1) introduction
//(Q6):- find the sum of all the value of an array?
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int hellow[n];
    for(int i=0;i<n;i++)
    {
        cin>>hellow[i];
        sum+=hellow[i];
    }
    cout<<sum;
    return 0;
}