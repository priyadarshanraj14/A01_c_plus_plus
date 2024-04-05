// (L7) pattern_question 
// (CP5) Question :- print a half pyramid using numbers of size n?

// example :-

// enter the size of pyramid N=5.
// 1
// 2 2       
// 3 3 3     
// 4 4 4 4   
// 5 5 5 5 5

// code :-

#include<iostream>
using namespace std;

    int main() 
    {
        int n;
        cout<<"enter the size of pyramid N (natural number)=";
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
