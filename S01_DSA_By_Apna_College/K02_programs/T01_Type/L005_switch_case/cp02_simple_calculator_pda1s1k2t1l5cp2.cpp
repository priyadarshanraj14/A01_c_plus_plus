// (L5) switch case 
// (CP2) Question :-  write a program to make a simple  calculator ?
// code :-

#include<iostream>
using namespace std;
int main() 
{
    float a,b; 
    char op;
    cout<<"enter two number (rational number) = ";
    cin>>a>>b;
    cout<<"enter operand=";
    cin>>op;
    switch(op)
    {
        case '+' : cout<<a+b; 
                   break;
         case '-' : cout<<a-b; 
                   break; 
         case '*' : cout<<a*b; 
                   break;
         case '/' : cout<<a/b; 
                   break;
       //  case '%' : cout<<a%b; 
       //           break;
        default:  cout<<"operator not found"<<endl;
    }
    return 0;
}