//(L7) pattern_question // (Q14)print hollow diamond inscribed in a
//rectangle using any characte: given n, print diamond with 2*n rows?
//output:-  
// enter the size of diamond n=10
// enter any character=0
// 0000000000000000000
// 000000000 000000000
// 00000000   00000000
// 0000000     0000000
// 000000       000000
// 00000         00000
// 0000           0000
// 000             000
// 00               00
// 0                 0
// 0                 0
// 00               00
// 000             000
// 0000           0000
// 00000         00000
// 000000       000000
// 0000000     0000000
// 00000000   00000000
// 000000000 000000000
// 0000000000000000000
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
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(j>n-i && j<=(n-i)+(2*i-1))
            {
                 cout<<" ";
            }
            else
            {
                cout<<a;
            }
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(j>n-i && j<=(n-i)+(2*i-1))
            {
                 cout<<" ";
            }
            else
            {
                cout<<a;
            }
        }
        cout<<endl;
    }
    return 0;
}