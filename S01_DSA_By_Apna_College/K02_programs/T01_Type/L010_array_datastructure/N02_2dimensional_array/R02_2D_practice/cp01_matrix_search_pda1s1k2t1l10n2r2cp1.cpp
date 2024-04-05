// (L10) array (data structure) // (N2) 2_dimensional_array // (R2) practice
// (CP1) Question :- search element in matrix ?

// code :-

#include<iostream>
using namespace std;
int main ()
{
    int r,c,key,i,j;
    cout<<" enter number of rows and columns for your matrix below \n";
    cin>>r>>c;
    int arr[r][c];
    cout<<"now enter the number in your ("<<r<<"*"<<c<<") matix (integer)";
    for(int i=0;i<r;i++)
    {
       for(int j=0;j<c;j++)
       {
         cin>>arr[i][j];
       }
    }
    cout<<"enter any number of your matrix,\n key =";
    cin>>key;
    for( i=0;i<r;i++)
    {
       for( j=0;j<c;j++)
       {
         if(key==arr[i][j])
         {
            cout<<"element found at ("<<i<<","<<j<<")";
            break;
         }
       }
       if(j!=c)
       {
        break;
       }
    }
    if(i==r)
    {
       cout<<"element not found ";
    }
    return 0;

}