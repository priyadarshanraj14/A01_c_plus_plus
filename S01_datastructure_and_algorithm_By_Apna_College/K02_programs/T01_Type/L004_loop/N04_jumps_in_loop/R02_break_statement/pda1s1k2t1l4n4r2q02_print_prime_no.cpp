//(L4) loop //(N4) jumps in loop // (R2) break statement
//(Q2) write a program to print all prime number in a given range ?
#include<iostream>
using namespace std;
int main ()
{
    int i,a,b; 
    cout<< "enter two number of your given range = ";
    cin>>a>>b; 
    for (a; a<b; a++)
    {
       for(i=2; i<a; i++)
       {
           if(a%i==0)
           {
               break;
           }
       }
       if(i==a)
       {
           cout<<a<<" ";
       }
    }
    return 0;
}