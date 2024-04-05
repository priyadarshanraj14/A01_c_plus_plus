// (L9) Function 
// (CP12) Question :- decimal to octal conversion

// code :-

#include<iostream>
using namespace std;
int decimal_to_octal(int n);// here we declare the function so we can write 
int main()                   // the function below our main function.
{
    int n,result;
    cout<<"decimal to octal conversion"<<endl;
    cout<<"enter any number n (natural number)=";
    cin>>n;
    result= decimal_to_octal(n);
    cout<<result<<endl;
    
} 
int decimal_to_octal(int n)
{
    int ans=0,x=1;
    while(x<=n)
    {
        x*=8;
    }
    x/=8;
    while(x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=8;
        ans=ans*10+lastdigit;
    }
    return ans;
}