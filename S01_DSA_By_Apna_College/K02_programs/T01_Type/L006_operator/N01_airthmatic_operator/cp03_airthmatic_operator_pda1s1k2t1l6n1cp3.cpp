// (L6) operatpor //(N1) Airthmatic_operator
// (CP3) Question :- Give an output of the following program?
// code :-

#include<iostream>
using namespace std;
int main()
{
    int i=0;
    i= i++ - --i + ++i - i--;
     //0     //0   //1 //1
    cout<<i<<endl;//0
    return 0;
}
//output=0