// (L7) pattern_question 
// (CP11) Question :- print zig zag pattern of size n using any single character ?

// example :-

// enter the value of n=9
// enter any character=*
//       *           *        
//    *     *     *     *     
// *           *           * 

// code:-

#include<iostream>
using namespace std;
int main () 
{
    while(1)
    {
    int n;
    char a;
    cout<<"enter the value of n (natural number)=";
    cin>>n;
    cout<<"enter any character=";
    cin>>a;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n; j++)
        {
            if((j+i)%4==0 ||( i==2 && j%4==0))
            {
                cout<<a<<"  ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    }
    return 0;
}