//(Q1) character // diference of character 'd-a' // 
#include<iostream>
using namespace std;
int main() 
{
    char n1='a',n2='f';
    cout<<n2-n1<<endl; // output=5
    cout<<n1<<endl;// output= a
    //char n3='29'; //29 is multicharacter ie 2 and 9.
   // cout<<n3<<endl;// output=9 // only
    int n4='d'+'a';
    cout<<n4<<endl;// output=197
    //char n5='d'-'a';
    //cout<<n5<<endl;//output!=3// here 'd'-'a'=3 but 3 is kept in a character n5.
    // so output of n5 is some character having ascii value is 3.(me)
    cout<<'d'-'a'<<endl;//output=3;
     char n6=n2-n1;
    cout<<n6<<endl;//output!=5//ouput=♣// character having ascii value 5 may be
   char n7=100;
   cout<<n7<<endl;//output:- d// 100 is ascii value of d
    return 0;
}
//ascii value :- 'a'=97,'b'=98,'c'=99,'d'=100.... in decimal
//ascii value :- 'A'=65,'B'=66,'C'=67,'D'=68.... in decimal
//ascii value :- '0'=48,'1'=49,'2'=50,....'9'=57