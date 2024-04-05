// (L4) loop // (N2) while loop 
// (CP2) Question :- program to add only positive number. if you input any negative
//                   number than program gives you sum of all your integer and end.
// code :-

#include<iostream>
using namespace std;
int main ()
{
  int number,sum=0;
  cout<<"enter a number (integer) =";
  cin>>number;
  while (number>=0)
  {
       sum=sum+number;
       cout<<"enter anumber=";
       cin>>number;
  }
  cout<<"sum="<<sum;
  return 0;
}