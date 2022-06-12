//(L4) loop //(N2) while loop //(Q2) program to add only positive 
//number. if you input any negative number than program gives you 
//sum of all your integer and end.
#include<iostream>
using namespace std;
int main ()
{
  int number,sum=0;
  cout<<"enter a number =";
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