//(L8) Function /(Q14):- add two binary number
// eg:-  10101         1+1=2 so 2-2=0 and carry=1
//    +  11011          1+1+1=3 s0 3-2=1 and carry =1
//      110000
#include<bits/stdc++.h>
int add_binary_num (int a, int b);
int reverse (int n, int x);
using namespace std;

int main ()
{
    int a,b;
    cout<<"binary addition \nenter two binary number \n";
    cin>>a>>b;
    cout<<add_binary_num (a,b)<<endl;
    return 0;
}

int add_binary_num (int a, int b)
{
    int ans=0,count=0;
    int prevcarry=0;
    while (a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans=ans*10+prevcarry;
            prevcarry=0;
            count++;
        }
        else if((a%2==0 && b%2==1) ||( a%2==1 && b%2==0))
        {
            if(prevcarry==1)
            {
                ans=ans*10+0;
                prevcarry=1;
                count++;
            }
            else
            {
                ans=ans*10+1;
                prevcarry=0;
                count++;
            }
        }
        else
        {
            ans=ans*10+prevcarry;
            prevcarry=1;
            count++;
        }
        a/=10;
        b/=10;
    }
    while(a>0)
    {
        if(prevcarry==1)
        {
            if(a%2==1)
            {
                ans=ans*10+0;
                prevcarry=1;
                count++;
            }
            else
            {
                ans=ans*10+1;
                prevcarry=0;
                count++;
            }
        }
        else
        {
            ans=ans*10+(a%2);
            prevcarry=0;
            count++;
        }
        a/=10;
    }
    while(b>0)
    {
        if(prevcarry==1)
        {
            if(b%2==1)
            {
                ans=ans*10+0;
                prevcarry=1;
                count++;
            }
            else
            {
                ans=ans*10+1;
                prevcarry=0;
                count++;
            }
        }
        else
        {
            ans=ans*10+(b%2);
            prevcarry=0;
            count++;
        }
        b/=10;
    }
    if(prevcarry==1)
    {
        ans=ans*10+1;
        count++;
    }
    ans=reverse(ans,count);
    return ans;
}

int reverse (int n, int x)
{
    float ans=0;//ans is float because output of pow function of 10^2=99.999999
    int count=0;
    while(n>0)
    {
        int lastdigit=n%10;
        ans=ans*10+lastdigit;
        n/=10;
        count++;
    }
    ans=ans*pow(10,(x-count));
    return ans;
    
}