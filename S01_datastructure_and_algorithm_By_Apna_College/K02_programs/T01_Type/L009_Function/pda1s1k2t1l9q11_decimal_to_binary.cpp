//(L9) Function /(Q11):- decimal to binary conversion
#include<iostream>
using namespace std;
int decimal_to_binary(int n);// here we declare the function so we can write 
int main()                   // the function below our main function.
{
    int n,result;
    cout<<"decimal to binary conversion"<<endl;
    cout<<"enter any number n=";
    cin>>n;
    result= decimal_to_binary(n);
    cout<<result<<endl;
    
} 
int decimal_to_binary(int n)
{
    int ans=0,x=1;
    while(x<=n)
    {
        x*=2;
    }
    x/=2;
    while(x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=2;
        ans=ans*10+lastdigit;
    }
    return ans;
}