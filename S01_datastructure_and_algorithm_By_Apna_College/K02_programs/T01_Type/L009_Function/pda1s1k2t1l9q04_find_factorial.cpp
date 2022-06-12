//(L9)function//(Q4):-find factorial of a number n?
#include<iostream>
using namespace std;

int fact (int n)
{
    int factorial=1;
    for(int i=n;i>=2;i--)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n;
    cout<<"enter any number=";
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}