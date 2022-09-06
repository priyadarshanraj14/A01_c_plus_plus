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
    cout << "enter the number in your matrix=\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "{ ";
    for (int i = 0; i < m; i++)
    {
        cout << "{ ";
        for (int j = 0; j < n; j++)
        {
            int k = i;
            int l = j;
            if (arr[i][j] == 0)
            {
                cout << "0,";
            }
            else
            {
                int s = 0;
                for (int p = 1; p <= m + n - 2; p++)
                {
                    for (int d = 0; d <= p; d++)
                    {
                        int a = d;
                        int b = (p - d);
                        if (l + b < n && l + b >= 0 && k + a < m && k + a >= 0)
                        {
                            if (arr[k + a][l + b] == 0)
                            {
                                cout << p << ",";
                                s = 1;
                                break;
                            }
                        }
                        a = d;
                        b = -(p - d);
                        if (l + b < n && l + b >= 0 && k + a < m && k + a >= 0)
                        {
                            if (arr[k + a][l + b] == 0)
                            {
                                cout << p<<",";
                                s = 1;
                                break;
                            }
                        }
                        a = -d;
                        b = (p - d);
                        if (l + b < n && l + b >= 0 && k + a < m && k + a >= 0)
                        {
                            if (arr[k + a][l + b] == 0)
                            {
                                cout << p<<",";
                                s = 1;
                                break;
                            }
                        }
                        a = -d;
                        b = -(p - d);
                        if (l + b < n && l + b >= 0 && k + a < m && k + a >= 0)
                        {
                            if (arr[k + a][l + b] == 0)
                            {
                                cout << p<<",";
                                s = 1;
                                break;
                            }
                        }
                    }
                    if (s == 1)
                    {
                        break;
                    }
                }
            }
        }
        cout<<" }, ";
    }
    cout<<"}";
}
