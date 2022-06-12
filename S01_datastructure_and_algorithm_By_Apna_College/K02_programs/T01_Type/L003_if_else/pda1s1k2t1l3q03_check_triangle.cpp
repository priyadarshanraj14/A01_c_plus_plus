//(L3) if else // (Q3) A program to check if a traiangle is scalene,
// isosceles, or equilateral ?          
#include<iostream>
using namespace std;
int main ()
{
    int side1,side2,side3;
    cout<<"enter the length of a side of triangle\n"<<"enter length of first side1=";
    cin>>side1;
    cout<<"enter the length of second side2=";
    cin>>side2;
    cout<<"enter the length of third side3=";
    cin>>side3;
    if (side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
    {
        if(side1==side2 && side1==side3)
       {
           cout<<"equilateral triangle";
       }
       else if (side1==side2 || side1==side3 || side2==side3)
       {
           cout<<"isosceles triangle";
       }
       else 
       {
           cout<<"scalene triangle";
       }
    }
    else 
    {
        cout<<"not a possible triangle";
    }
    return 0;
}