//(L8)some_question//(Q1):-check if a given number is armstrong
// number or not?
//eg:-1=1^1, 153=1^3+5^3+3^3, the sum of its each digits raised to the power
//numer of total digit in a given number is equal to number itself.
#include<iostream>
#include<math.h>
using namespace std;
int main () 
{
    while(1)
    {
    int n,lastdigit,k;
    cout<<"enter any number=";
    cin>>n;
    int digit=0,originaln=n;
    float sum=0;
    while(n>0)
    {
        n/=10;
        digit++;
    }
    n=originaln;
    while(n>0)
    {
        lastdigit = n%10; 
        sum+=pow(lastdigit,digit); //pow(a,b)=a^b
        n/=10;
    }

    if(sum==originaln)
    {
        cout<<"armstrong number"<<endl;
    }
    else
    {
        cout<<"not a armstrong number"<<endl;
    }
    if(originaln==0)
    {
        break;
    }
    cout<<"enter 0 to end the program"<<endl;
}
    return 0;
}
//here pow(a,b) function gives output 'a' to the power 'b',this function
// included in the header file <math.h>
// me//calculate  your own pow function instead of using pow from library. 
// here 10^2=99.99999999..... so if you define 'sum variable' as integer than
// you get 99 in sum variable, it depend on your compiler some compiler gives
// correct ans i.e 100 and some compiler may be gives you 99.9999...