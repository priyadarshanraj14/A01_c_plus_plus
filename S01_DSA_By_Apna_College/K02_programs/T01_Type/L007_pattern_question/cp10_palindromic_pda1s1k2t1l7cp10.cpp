// (L7) pattern_question 
// (CP10) Question :- print palindromic pattern of size n ?

// example :-

// enter the value of n=5
//         1         
//       2 1 2       
//     3 2 1 2 3     
//   4 3 2 1 2 3 4   
// 5 4 3 2 1 2 3 4 5

// code :-

#include<iostream>
using namespace std;
int main () 
{
    int n,k,l;
    cout<<"enter the value of n (natural number)=";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        k=i;
        l=1;
        for(int j=1;j<n+i; j++)
        {
            if(j<=n-i)
            {
                cout<<"  ";
            }
            if(j>n-i && j<=n)
            {
               cout<<k<<" ";
               k--;
            }
            if (j>n)
            {
                l++;
                cout<<l<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}