// (L7) pattern_question 
// (CP12) Question :- print diamond pattern using any character for given n,
//                    print diamond with 2*n rows??

// example:- for n=5;

//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *    

// code :-

#include<iostream>
using namespace std;
int main()
{
    int n;
    char a;
    cout<<"enter the size of diamond n (natural number)=";
    cin>>n;
    cout<<"enter any character=";
    cin>>a;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<a;
        }
        cout<<endl;
    }
     for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}