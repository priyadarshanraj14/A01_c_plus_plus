//(L6) operatpor//(N1) Airthmatic_operator// (Q4) Give an output of the
// following program?
#include<iostream>
using namespace std;
int main ()

{
    int i=1,j=2,k=3;
    int m= i-- - j-- - k--;
        //1    //2   //3
    cout<<"i="<<i<<endl;
    cout<<"j="<<j<<endl;
    cout<<"k="<<k<<endl;
    cout<<"m="<<m<<endl;
    return 0;
}
//output=i=0,j=1,k=2,m=-4