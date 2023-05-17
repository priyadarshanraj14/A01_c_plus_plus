//(L10)array data structure // (N1) 1_dimensional_array // (R4) array challenges
/*
(CP4)Question:- (record breaking day)
isyana is given the number of visitors at her local
theme park on N consecutive days.the number of visitors on i-th day is Vi.
a day is record breaking if it satisfy both the following conditions.
(1) the number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.
(2) either it is the last day or the number of visitors on the day is strictly
larger than the number of visitors on the following day.
note that the very first day could be a record breaking day. please help isyana
to find out the number of recording breaking days.

Input :- the first line of the input gives the number of test cases T.T test cases
follow. each test cases begins with a line containing the integer N . the second
line contains N integers. the ith integer is Vi.

Output :- for each test case output one line containing case # X:Y, where x is the
test case number (starting from 1) and y is the number of record breaking days.

constraint:-
time limit :- 20 second per test set.
memory limit 1 GB.
   1<=T<=100
   0<=Vi<=2*10^5
test set 1
1<=N<=1000
Test set 2
1<=N<=2*10^4 for at most 10 test cases.
for the remaining cases 1<=N<=1000
*/

/*
solution :- we have to write a code which have worst case time complexity O(N),
because N^2 > 20*10^8 i.e  (2*10^5)^2 > 2*10^9
*/
// code:-
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "how many number you will give=";
    cin >> n;
    int a[n + 1];
    a[n] = -1;
    cout << "enter your number here (only +ve integer value)\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << "1 record breaking days are found" << endl;
        return 0;
    }

    int mx = -1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << " record breaking days are found" << endl;
    return 0;
}
