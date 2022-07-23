//(Q003) :- COVERT DECIMAL NUMBER TO ROMAN NUMBER ? 
#include<bits/stdc++.h>
using namespace std;

void roman_number (int quotient,int divisor)
{
   for(int i=1;i<=quotient;i++)
   {
      switch (divisor)
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
     return roman;
 }
   int main ()
   {
    int divisor=1,quotient,remainder,dividend;
    //cout<<"ENTER ANY DECIMAL NUMBER:";
    //cin>>dividend;
    for(int i=1;i<=3999;i++)
    {
      cout<<"  ";
      dividend=i;
      divisor=1;
        if(dividend==0 || dividend>=4000)
        {
        roman_number (1,dividend); 
        return 0;
        }
        while((dividend/divisor)>9)
        {
        divisor*=10;
        }
        while(dividend>0)
        {
                quotient=dividend/divisor;
                remainder= dividend%divisor;

                if(quotient>0 && quotient<4 || quotient>=5 && quotient<=8)
                {
                if(quotient>=5)
                {
                roman_number (1,divisor*5); 
                quotient-=5;       
                }
                roman_number (quotient,divisor); 
                dividend=remainder;
                //divisor=divisor/10;
                divisor=advance(remainder);
                }
                if( quotient==4 || quotient==9 )
                {
                roman_number (1,divisor);
                switch (quotient)
                {
                case 4:  roman_number (1,divisor*5);
                        break;
                case 9:  roman_number (1,divisor*10);
                        break;
                }
                dividend=remainder;
                //divisor=divisor/10;
                divisor=advance(remainder);
                }
        }
    }
    return 0;
   }