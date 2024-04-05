// (L6) operatpor // (N6) Miscellaneous_operator
// (CP1) Question :- Give an output of the following program?
// code :-

#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,d,g;
    float f=4.35;
    a=1,2,3;
    b=(1,2,3); // comma (,) operator
    cout<<a<<"\n"<<b<<endl;
    cout<<int(f)<<endl;// int() - cast operator convert one data type to another.
    c=10;
    d=12;
    g=c>=d? c-d:d-c; // c>=d?c-d:d-c is a conditional operator or ternary operator.if condition true than do c-d otherwise do d-c.
    cout<<g<<endl;
    return 0;

}
// output - a=1,b=3,g=2,int(f)=4