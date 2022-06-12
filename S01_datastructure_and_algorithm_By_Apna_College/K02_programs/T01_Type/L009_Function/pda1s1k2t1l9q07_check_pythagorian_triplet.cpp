//(L9)function)//(Q7):-check pythagorian triplet for given x,y,z?
#include<bits/stdc++.h> // add all header file of c++
using namespace std;
bool check(int x,int y,int z)
{
   int a,b,c; 
   a=max(x,max(y,z)); // max function gives output of maximum value 
   if(a==x)
   {
       b=y;c=z;
   }
   else if(a==y)
   {
       b=x;c=z;
   }
   else
   {
       b=x;c=y;
   }
   if( a*a==b*b+c*c )
   {
       return 1;   // true
   }
   else
   {
       return 0;   // false
   }
}

int32_t main()
{
   int x,y,z;
   cout<<"enter three value to check pythagorian triplet=";
   cin>>x>>y>>z;
   if(check(x,y,z))
   {
       cout<<"pythagorian triplet";
   }
   else
   {
       cout<<" not a pythagorian triplet";
   }
}
//here #include<bits//stdc++.h>  is basically a way to import every single 
// c++ file.
// int32_t :- 32 bits,8bits,16bits,64bits you can use
// max(a,b):- it is a function used to compare between a and b and gives output
// a if a>b else b.