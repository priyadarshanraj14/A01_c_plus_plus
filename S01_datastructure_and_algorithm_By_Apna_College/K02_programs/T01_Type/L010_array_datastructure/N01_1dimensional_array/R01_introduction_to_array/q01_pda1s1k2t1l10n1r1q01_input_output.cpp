//(L10)array data structure // (N1) 1_dimensional_array // (R1) introduction
//(Q1):- declaration of array and input- output in array.
#include<iostream>
using namespace std;
int main ()
{
    int array[4]; //declaration of array. datatype name [size].
                  // any name you can choose for array eg :- int hellow[size].
    array[0]=10;
    array[1]=20;
    array[2]=30;
    array[3]=40;
    cout<<array[2]<<endl;
    return 0;
}
//output=30