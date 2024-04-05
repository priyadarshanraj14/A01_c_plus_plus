// (L6) operatpor // (N3) Logical_operator
// (CP1) Question :-  Give an output of the following program?
// code :-

#include<iostream>
using namespace std;
int main () 
{
    int a=0,b=5,c,d,e,f;
    c=a&&b;// if both are true than it return true ie 1 otherwise it return 0.
    d=a||b; // if any one is true than it return true.
    e=!a; // reverse the answer ie true become false and vice versa.
    f=!b;
    cout<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f;
    return 0;
}

//output- c=0,d=1,e=1,f=0;