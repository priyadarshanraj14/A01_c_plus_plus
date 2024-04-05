// (L7) pattern_question 
// (CP9) Question :- print a rhombus pattern of size n using any
//                   character?
// examplet :- 
// enter the value of n (natural number)=5
// enter any character=*
//         *  *  *  *  *
//       *  *  *  *  *
//     *  *  *  *  *
//   *  *  *  *  *
// *  *  *  *  *

// code :-

#include<iostream>
using namespace std;
int main () 
{
    int n;
    char a;
    cout<<"enter the value of n (natural number)=";
    cin>>n;
    cout<<"enter any character=";
    cin>>a;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  "; // 2 space given
        }
        for(int j=1;j<=n;j++)
        {
            cout<<a<<"  ";// 2 space given
        }
        cout<<endl;

    }
    return 0;
}
