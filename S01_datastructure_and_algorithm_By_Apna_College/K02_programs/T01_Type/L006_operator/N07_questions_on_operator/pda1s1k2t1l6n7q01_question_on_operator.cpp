//(L6) operatpor//(N7) Qestions_on_operator // (Q1)Give an output of the
// following program?
#include<iostream>
using namespace std;
int main ()
{
    int a=1,b=3,c;
    c=b<<a;//3*2^1=6
    b=c*(b*(++a)--);//6*(3*(2)--)/6*6/36
    a=a>>b;// 1/2^3=0
    cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
    return 0;
}
//output- a=0,b=36,c=6;