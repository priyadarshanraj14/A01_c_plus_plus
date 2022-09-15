//(L6) operatpor//(N4) Bitwise_operator// (Q1)Give an output of the
// following program?
#include<iostream>
using namespace std;
int main ()
{
    int a=5,b=6,c,d,e,f,g=2,i,j;;     //a=5(0101),b=6(0110)
    c=a&b; // copies a bit to the result if it exist in both operand. and
    d=a|b; // copies a bit to the result if it exist in either operands. or
    e=a^b; //  copies a bit to the result if it exist in only one operands. xor
    f=~a;  // every bit is changed,0 become 1 and 1 become 0.
    i=a<<g; // lift shift operator (a*2^g =20)
    j=a>>g; // right shift operator (a/2^g = 1)
    cout<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<endl;
    cout<<i<<"\n"<<j;
    return 0;

}
// output- c=4,d=7, e=3, f=-6,i=20,j=1;
//   a=  0101  =(5)
//   b=  0110  =(6)
// a&b=  0100  =4
// a|b=  0111  =7
// a^b=  0011  =3