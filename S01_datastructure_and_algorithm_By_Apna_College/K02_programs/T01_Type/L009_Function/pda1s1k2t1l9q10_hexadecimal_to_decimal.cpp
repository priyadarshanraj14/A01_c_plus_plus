//(L9) Function /(Q10):- hexadecimal to decimal coversion
//eg input:-1CF // output=463
#include<bits/stdc++.h>
using namespace std;

int hexadecimal_to_decimal (string n)
{
  int ans=0,x=1;
  int s=n.size();// gives the size of string n;
  for(int i=s-1;i>=0;i--)
  {
      if(n[i]>='0' && n[i]<='9')
      {
          ans+=x*(n[i]-'0');
      }
      else if (n[i]>='a'&& n[i]<='f')
      {
         ans+=x*(n[i]-'a'+10); 
      }
      else if (n[i]>='A'&& n[i]<='F')
      {
         ans+=x*(n[i]-'A'+10); 
      }
      x*=16;
  }
  return ans;
}

int main() 
{
    string n;
    cout<<"enter hexadecimal number"<<"\n";
    cin>>n;
    cout<<hexadecimal_to_decimal(n)<<endl;
    return 0;
}
// string :- we will study later.
//n[]:- we will study later.