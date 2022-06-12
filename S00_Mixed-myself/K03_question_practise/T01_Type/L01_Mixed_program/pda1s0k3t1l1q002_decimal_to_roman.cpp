//(Q002) :- COVERT DECIMAL NUMBER TO ROMAN NUMBER ? 
#include<bits/stdc++.h>
using namespace std;

 void roman_number (int roman)
   {
    switch (roman)
    {
        case 1: cout<<"I";
                break;
        case 5: cout<<"V";
                break;
        case 10: cout<<"X";
                 break;
        case 50: cout<<"L";
                 break;
        case 100: cout<<"C";
                  break;
        case 500: cout<<"D";
                  break;
        case 1000: cout<<"M";
                   break;
        default : cout<<"wrong input/ still learning";

    }
   }
 int advance (int decimal)
 {
     int count=-1;
     float roman;
     while(decimal>0)
     {
         decimal/=10;
         count+=1;
     }
     roman=pow (10,count);
     //cout<<roman;
     roman_number(roman);
     return 0;
 }

int main() 
{
    int decimal,roman;
    cout<<"ENTER ANY DECIMAL NUMBER:";
    cin>>decimal;
    if(decimal==0 || decimal>=4000)
    {
       roman_number (roman); 
       return 0;
    }
    while(decimal>0)
    {
      if(decimal>=1 && decimal<4)
      {
         roman=1;
         for(int i=1;i<=decimal;i++)
         {
         roman_number (roman);
         }
         decimal= 0;
      }
      if(decimal>=4 && decimal<9)
      {   
         roman=5;
         while(decimal>=5)
         {
            decimal-=5;
            roman_number (roman);
         }
         if(decimal<5 && decimal>=4)
         {
            advance (decimal); 
            roman_number(roman);
            decimal-=4; 
         }
      }
      if(decimal>=9 && decimal<40)
      {
         roman=10;
         while(decimal>=10)
         {
            decimal-=10;
            roman_number (roman);
         }
         if(decimal<10 && decimal>=9)
         {
            advance (decimal); 
            roman_number(roman);
            decimal-=9; 
         }
      }
      if(decimal>=40 && decimal<90)
      {
         roman=50;
         while(decimal>=50)
         {
            decimal-=50;
            roman_number (roman);
         }
         if(decimal<50 && decimal>=40)
         {
            advance (decimal); 
            roman_number(roman);
            decimal-=40; 
         }
      }
      if(decimal>=90 && decimal<400)
      {
         roman=100;
         while(decimal>=100)
         {
            decimal-=100;
            roman_number (roman);
         }
         if(decimal<100 && decimal>=90)
         {
            advance (decimal); 
            roman_number(roman);
            decimal-=90; 
         }
      }
      if(decimal>=400 && decimal<900)
      {
            roman=500;
         while(decimal>=500)
         {
            decimal-=500;
            roman_number (roman);
         }
         if(decimal<500 && decimal>=400)
         {
            advance (decimal); 
            roman_number(roman);
            decimal-=400; 
         }
      }
      if(decimal>=900 && decimal<=3999)
      {
            roman=1000;
         while(decimal>=1000)
         {
            decimal-=1000;
            roman_number (roman);
         }
         if(decimal<1000 && decimal>=900)
         {
            advance (decimal); 
            roman_number(roman);
            decimal-=900; 
         }
      }
 }
   return 0;
}
  
