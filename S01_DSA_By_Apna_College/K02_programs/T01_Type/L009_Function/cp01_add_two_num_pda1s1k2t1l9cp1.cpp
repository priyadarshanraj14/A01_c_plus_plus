// (L9) Function 
// (CP1) Question :- Add two number given by user?

// code :-

#include<iostream>
using namespace std;

int add (int num1, int num2) // this is add function;
{
    int sum=num1 +num2;
    return sum;
}

int main()                   // this is main function
{
    int a,b; 
    cout<<"enter two number (integers)=";
    cin>>a>>b; 
    cout<<add(a,b)<<endl; // here add function called. a and b send to num1
    return 0;             // and num2; output= return value of add function;
}
// Note :- (me) write all other function above the main function, before calling
// a function, a function must be declare .
