//(L10)array data structure // (N1) 1_dimensional_array // (R4) array challenges
/*
(CP5)Question:- (first repeating element) 
given an array[] of size N . the task is to 
find the index of first repeating element in the array of integers i.e 
an element that occurs more than once and whose index of first occurance is 
smallest. (question asked in amazon, oracle)

constraint :-
1<=N<=10^4 ,   0<=Ai<=10^4

example :-
input
7
1 5 3 4 3 5 6
output :-
2
explanation :- 5 and 3 is repeating and its first appearing index is 2 and 3
respectively (if index start from 1). so 2 is smallest here.

*/
// code :-
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    int a[n];
    cout<<"enter your number here (only +ve integer value)\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    const int N = 1e4+2; // 1e4=10^4
    // we take this beacuse Ai ranges from 0 to 10^4.
    int idx[N];
    for(int i=0;i<N; i++)
    {
        idx[i]=-1;
    }
    int minidx = INT_MAX;
    for(int i=0;i<n; i++)
    {
        if(idx[a[i]] != -1)
        {
            minidx=min(minidx,idx[a[i]]);

        }
        else
        {
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX)
    {
        cout<<"no any element is repeating"<<endl;
    }
    else
    {
        cout<<"index of first repeating element is "<<minidx +1 <<endl;
    }
    return 0;
}
// note :-(me) do not declare size of array more than 10^5, otherwise program end.