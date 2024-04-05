// (L9) Function 
// (CP9) Question :- write a code for octal to decimal conversion?

// code :-

#include<bits/stdc++.h>
using namespace std;
int octal_to_decimal (int n)
{
   int ans=0;
   int x=1;
   while(n>0)
   {
       int y=n%10;
       ans+=x*y;
       x*=8;
       n/=10;
   }
   return ans;
}
int32_t main()
{
    int n;
    cout<<"enter any octal number=";
    cin>>n;
    cout<<octal_to_decimal(n);

}