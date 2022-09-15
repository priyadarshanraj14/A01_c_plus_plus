//(L6) operatpor//(N1) Airthmatic_operator// (Q4)Give an output of the 
//following program?
#include<iostream>
using namespace std;
int main ()
{
    int i=10,j=20,k;
    k= i-- - i++ +  --j - ++j + --i - j-- + ++i - j++;
     //10  //9     //19  //20   //9 //20   //10 //19
    cout<<"i="<<i<<endl;//10
    cout<<"j="<<j<<endl;//20
    cout<<"k="<<k<<endl; //-20
    int a=7,b=50,c,d; 
    c=b%a; //% this gives remainder
    d=b/a;// / this gives quotient
    cout<<c<<"\n"<<d<<endl;
    return 0;
}
//output= i=10,j=20,k=-20,c=1,d=7;