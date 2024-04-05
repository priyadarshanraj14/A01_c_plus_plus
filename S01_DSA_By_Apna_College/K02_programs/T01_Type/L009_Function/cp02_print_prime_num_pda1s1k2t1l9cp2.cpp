// (L9) Function 
// (CP2) Question :- print all the prime number between two given numbers?

// code :-

#include<iostream>
#include<math.h> // header file used to run sqrt function
using namespace std;

bool primenumber (int num)
{
    for(int i=2;i<=sqrt(num); i++)
    {
       if( num%i==0 )
       {
           return false;  // false == 0
       }
    }
    return true; // true ==1
}

int main()
{
    int a,b; 
    cout<<"enter the range of number from a to b (natural number a<b)  a=";
    cin>>a;
    cout<<"b=";
    cin>>b; 
    for(int i=a;i<=b;i++)
    {
        if (primenumber(i) )
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
// variable of function destroy after returning the value
// variables of one function is different from variables of all other function.
// same variable name we can use in different function and they are different.