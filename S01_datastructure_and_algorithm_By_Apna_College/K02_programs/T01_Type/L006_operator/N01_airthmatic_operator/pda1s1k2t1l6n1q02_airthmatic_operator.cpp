//(L6) operatpor//(N1) Airthmatic_operator// (Q2)Give an output of the
// following program?
#include<iostream>
using namespace std;
int main ()

{
    int i,j;
    int k;
    i=1;
    j=2,
    k= i +  j +  i++  +  j++  +  ++i  +  ++j;
     //1 //2   //1    //2      //3      //4
    cout<<"i="<<i<<endl; //3
    cout<<"j="<<j<<endl;//4
    cout<<"k="<<k<<endl;
    return 0;

}
//output= k=13,i=3,j=4