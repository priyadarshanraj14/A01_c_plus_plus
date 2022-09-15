//(L7) pattern_question // (Q15)print hollow butterfly 
//pattern using any characte: for  given value of n?
// output:-
#include<iostream>
using namespace std;
int main()
{
    int n;
    char a;
    cout<<"enter the size of diamond n=";
    cin>>n;
    cout<<"enter any character=";
    cin>>a;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<a;
            }
            else 
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<a;
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<a;
            }
            else 
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                cout<<a;
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
