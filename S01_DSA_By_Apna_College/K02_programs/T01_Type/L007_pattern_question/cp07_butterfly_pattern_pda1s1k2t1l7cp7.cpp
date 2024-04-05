// (L7) pattern_question 
// (CP7) Question :- print a butterfly pattern using any single
//                   character for a given value of n?
// example :-

// enter any character = *;
// enter the size of butterfly N=4;
// *             * 
// * *         * * 
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

// code:-

#include<iostream>
using namespace std;
int main()  
{
   int n;
   char a;
   cout<<"enter any character=";
   cin>>a;
   cout<<"enter the size of butterfly N (natural number)=";
   cin>>n;
   for(int row=1;row<=n;row++)
   {
       for(int col=1; col<=2*n;col++)
       {
           if(col<=row)
           {
              cout<<a<<" ";
           }
           if(col>row && col<=(2*n)-row)
           {
               cout<<"  ";
           }
           if(col>(2*n)-row)
           {
              cout<<a<<" ";
           }
       }
       cout<<endl;
       
   }
   for(int row=n;row>=1;row--)
   {
       for(int col=1; col<=2*n;col++)
       {
           if(col<=row)
           {
              cout<<a<<" ";
           }
           if(col>row && col<=(2*n)-row)
           {
               cout<<"  ";
           }
           if(col>(2*n)-row)
           {
              cout<<a<<" ";
           }
       }
       cout<<endl;
       
   }
   return 0;
}
