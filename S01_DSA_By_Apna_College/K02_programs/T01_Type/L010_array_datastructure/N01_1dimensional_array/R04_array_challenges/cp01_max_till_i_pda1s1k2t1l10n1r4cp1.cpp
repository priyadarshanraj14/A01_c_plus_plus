// (L10) array data structure // (N1) 1_dimensional_array // (R4) array challenges
// (CP1) Question:- (max till i) given an array a[] of size n . for every i from 
// 0 to n-1 output max ( a[0],a[1],a[2],.....a[i]).

// example :-     inout -   -6 -2 -10 9 5 7 12 14 1 
//                output -  -6 -2 -2  9 9 9 12 14 14
// code :-

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "how many number you will give=";
    cin >> n;
    int arr[n];
    cout << "enter your number (integer)\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
        cout << maximum << " ";
    }
    return 0;
}