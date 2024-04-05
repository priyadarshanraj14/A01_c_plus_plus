// (L7) pattern_question 
// (CP4) Question :- print a half pyramid after 180 degree rotation
//                   using any single character of size value n ?
// example :-

// enter any character=@
// enter the size of pyramid N=5
//         @ 
//       @ @ 
//     @ @ @ 
//   @ @ @ @ 
// @ @ @ @ @

// code :-

#include<iostream>
using namespace std;
int main () 
{
    int  n;
    char a;
    cout<<"enter any character=";
    cin>>a;
    cout<<"enter the size of pyramid N (natural number)=";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
           if(col<=n-row)
           {
               cout<<"  ";
           }
           else
           {
               cout<<a<<" ";
           }
        }
        cout<<endl;
    }
    return 0;
}
