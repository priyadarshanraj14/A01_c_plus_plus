// (Q004) :- given an m * n matrix , return the distance of the nearest 0 for
// each cell. The distance between two adjacent cell is 1.
// example :-     0 0 0   this is input matrix {{0,0,0},{0,1,0},{1,1,1}}
//                0 1 0
//                1 1 1
// output :- {{0,0,0},{0,1,0},{1,2,1}}
// constraint:- matrix [i][j]is either 0 or 1.
//              there is at least one 0 in matrix.

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "enter the number of rows in your matrix=";
    cin >> m;
    cout << "enter the number of columns in your matrix=";
    cin >> n;
    int arr[m][n];
    cout << "enter the number in your matrix=";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    distance_finder(m, n, arr);
    return 0;
}

void distance_finder(int m, int n, int arr[][])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k = i;
            int l = j;
            if (arr[i][j] == 0)
            {
                cout << "0";
            }
            else
            {
                for (int i = 0)
                    if (l < n && l >= 0 && k < m && k >= 0)
                    {
                    }
            }
        }
    }
}

