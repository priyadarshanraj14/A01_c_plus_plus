//(L7) pattern_question // (Q5) print a half pyramid using numbers of size n?
//output- 
// enter the size of pyramid N=5.
// 1
// 2 2       
// 3 3 3     
// 4 4 4 4   
// 5 5 5 5 5
#include<iostream>
using namespace std;

    int main() 
    {
        int n;
        cout<<"enter the size of pyramid N=";
        cin>>n;
        for(int row=1; row<=n; row++)
        {
            for(int col=1;col<=row; col++)
            {
                cout<<row<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
