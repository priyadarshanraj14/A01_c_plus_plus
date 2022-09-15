//(L8)some_question//(Q1)write a code to reverse a given number n?
#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter any number=";
    cin>>n;
    int reverse=0;
    while(n>0)
    {
        int lastdigit;
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n/=10;
    }
    cout<<reverse<<endl;
    return 0;
}