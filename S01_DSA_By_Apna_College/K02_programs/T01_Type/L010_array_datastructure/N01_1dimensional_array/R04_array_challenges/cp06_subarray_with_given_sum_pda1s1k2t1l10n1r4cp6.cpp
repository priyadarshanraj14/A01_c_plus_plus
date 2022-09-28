//(L10)array data structure // (N1) 1_dimensional_array // (R4) array challenges
/*
(CP6) question :- (subarray with given sum) Given an unsorted array A of size
N of non-negative integers, find a continuous subarray which adds to a given
number s. (question asked in amazon, facebook, google, visa)

constraints:-
1<= N <=10^5 ,  0<=Ai<=10^8 , s>0

example :-
input
N=5, s=12, A[]={1,2,3,7,5}
output -
2 4
explanation :- the sum of element from 2nd position to 4th position is 12.
*/
// code :-
#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cout << "enter the size of array.\nN=";
    cin >> n;
    cout << "enter your all "<< n <<" number in array 'Ai'(only non negative integer)\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the sum of any subarray(only natural number)\nS=";
    cin >> s;
    int i = 0, j = 0, sum = 0;
    while (j < n && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }
    if (sum == s)
    {
        cout << "index of suarray=" << i + 1 << " to " << j << "\n"
             << endl;
        return 0;
    }
    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            cout << "index of suarray=" << i + 1 << " to " << j + 1 << "\n"
                 << endl;
            return 0;
        }
        j++;
    }
    cout << "not found"
         << "\n"
         << endl;
    return 0;
}

// time complexity = O(N)