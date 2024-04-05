// (L5) switch case 
// (CP1) Question :- write a program to find whether an alphabet is 
//                   vowel or consonant ?
// code :-

#include<iostream>
using namespace std;
int main () 
{
    char c;
    cout<<"enter an alphabet = ";
    cin>>c; 
    switch(c)
    {
        case 'a' : cout<<" it is vowel ";
                   break;
        case 'e' : cout<<" it is vowel ";
                   break;
        case 'i' : cout<<" it is vowel ";
                   break;
        case 'o' : cout<<" it is vowel ";
                   break;
        case 'u' : cout<<" it is vowel ";
                   break;
        case 'A' : cout<<" it is vowel ";
                   break;
        case 'E' : cout<<" it is vowel ";
                   break;
        case 'I' : cout<<" it is vowel ";
                   break;
        case 'O' : cout<<" it is vowel ";
                   break;
        case 'U' : cout<<" it is vowel ";
                   break;
        default : cout<<" it is consonant";

    }
    return 0;
}