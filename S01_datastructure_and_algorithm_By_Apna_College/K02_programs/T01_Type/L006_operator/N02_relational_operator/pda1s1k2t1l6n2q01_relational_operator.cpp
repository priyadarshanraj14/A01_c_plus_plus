//(L6) operatpor//(N2) Relational_operator// (Q1) Give an output of the
// following program?
#include<iostream>
using namespace std;
int main ()
{
    int a=5,b=10,c=10,d=10,e=10,f=10,g=10,h=10,i=5;
    c= a==b;// gives true if both operand are equal.
    d= a!=b; // gives true if both operand are not equal.
    e= a>b; //  gives true if "a" greater than b;
    f= a<b; //  gives true if "a" less than "b";
    g= a<=i;//  gives true if "a" less than equal to "b";
    h= a>=b; // gives true if "a" greater than "b";
    cout<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h;
    return 0;
}
//output- c=0,d=1,e=0,f=1,g=1,h=0;