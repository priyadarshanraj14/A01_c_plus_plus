//(L7) pattern_question // (Q4)print a half pyramid after 180 degree 
//rotation using any single character of size value n ?
//output- 
// enter any character=@
// enter the size of pyramid N=5
//         @ 
//       @ @ 
//     @ @ @ 
//   @ @ @ @ 
// @ @ @ @ @
#include<iostream>
using namespace std;
int main () 
{
    int  n;
    char a;
    cout<<"enter any character=";
    cin>>a;
    cout<<"enter the size of pyramid N=";
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
