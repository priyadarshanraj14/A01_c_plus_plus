// (L8) some_question
// (CP1) Question :- check if a given number is prime or not?

// code :-

#include<iostream>
#include<cmath>
using namespace std;
int main () 
{
    while(1)            // while loop is always true.
    {
    int n;
    cout<<"enter any number (natural number)=";
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++) //sqrt(n) gives square root of n;
    {
        if(n%i==0)
        {
            cout<<"not a prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        if(n==0||n==1)
        {
            cout<<"neither prime nor composite "<<endl;
        }
        else
        {
        cout<<"prime number"<<endl;
        }
    }  
    if(n==0)
    {
        break;
    }
    cout<<"enter 0 to end the program"<<endl;
    }
    return 0;
}
// here 'sqrt(n)' function gives the square root of 'n' which is included in
// the header file 'cmath' which is mentioned above.
//while(1) is always true and loop never end so we use 0 to break the loop;
// (me)-we use this to use the program on multiple input