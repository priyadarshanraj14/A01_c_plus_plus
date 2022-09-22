//(L10)array data structure // (N1) 1_dimensional_array // (R4) array challenges
/*
(CP3)Question:-(longest aithmatic subarray) 
saraswati has an array of n non-negative integers.  
the ith integer of the array is Ai.she wants to choose a contiguous airthmatic 
subarray from her array that has the maximum length.please help her to determine 
the length of the longest contiguous airthmatic subarray.

(question asked in kick start- google competition.)

Input :- the first line of the input gives the number of test cases T.T test cases
follow. each test cases begins with a line containing the integer N . the second
line contains N integers. the ith integer is Ai.

Output :- for each test case output one line containing case # X:Y, where x is the
test case number (starting from 1) and y is the length of the longest contiguous
airthmatic subarray.

Constraint :- 
time limit :- 20 second per test set.
memory limit 1 GB.
   1<=T<=100
   0<=Ai<=10^9
test set 1
2<=N<=2000
Test set 2
2<=N<=2*10^5 for at most 10 test cases.
for the remaining cases 2<=N<=2000
*/

/* 
solution :- airthmatic array means differences between consecutive integers
are equal. eg :- {9,7,5,3}
1 second = 10^8 operation approx. let time complexity of our code is O(N^2) than
for N = 2000 we have 2000^2 operation i.e 4*10^6 which is less than 2*10^9, than
our code will run under 20 second i.e (2*10^9 operation)
1GB= 1024 MB, 1MB=1024KB, 1KB=1024 Byte , (1 byte = 8 bit)
*/
//code :-
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    cout<<"enter your number here (only non-negative integer)\n";
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=2, pd=a[1]-a[0];
    int j=2, curr=2;
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<"length of longest airthmatic subarray="<<ans<<endl;
    return 0;
}

/*  things written in between these two symbol 'slash star' and 'star slash'  
 is acted as comment, comment have nothing to do with the code.
*/