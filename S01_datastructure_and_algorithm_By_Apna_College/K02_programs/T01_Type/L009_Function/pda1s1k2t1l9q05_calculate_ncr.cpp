//(L9)function//(Q5):-calculate ncr given n,r?
// ncr= n!/((n-r)!*r!)
#include<iostream>
using namespace std;
int fact (int x)
{
    int factorial=1;
    for(int i=2;i<=x;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int n,r;
    cout<<"n=";
    cin>>n;
    cout<<"r=";
    cin>>r;
    int ans=fact(n)/(fact(n-r)*fact(r)); //cout<<fact;
    cout<<ans;
    return 0;
}