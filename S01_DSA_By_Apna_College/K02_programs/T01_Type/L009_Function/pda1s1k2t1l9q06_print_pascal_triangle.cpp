//(L9)Function//(Q6)-print pascal triangle for given value of n?
// enter the size of pascal triangle n=7
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1        
// 1 5 10 10 5 1    
// 1 6 15 20 15 6 1
#include<iostream>
using namespace std;
int fact (int f)
{
    int factorial=1;
    for(int i =2;i<=f;i++)
    {
       factorial*=i;
    }
    return factorial;
}
int main()
{
    int n;
    cout<<"enter the size of pascal triangle n=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
}