//(L10)array data structure // (N1) 1_dimensional_array // (R4) array challenges
//(CP1)Question:- (max till i) given an array a[] of size n . for every i from 
// 0 to n-1 output max ( a[0],a[1],a[2],.....a[i]).
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "how many number you will give=";
    cin >> n;
    int arr[n];
    cout << "enter your number\n";
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