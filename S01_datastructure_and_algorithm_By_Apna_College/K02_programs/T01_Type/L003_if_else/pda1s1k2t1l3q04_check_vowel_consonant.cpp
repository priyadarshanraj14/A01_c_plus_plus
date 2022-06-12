// (L3) if else // (Q4) program to check if an alphabet is vowel or 
//consonant?
#include<iostream>
using namespace std;
int main ()
{
    char c;
    cout<<"enter an alphabet = ";
    cin>>c;
    int lowercasevowel, uppercasevowel;
    lowercasevowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    uppercasevowel = (c=='A' || c=='E' || c=='I' || c=='o' || c=='U');
    
    if(lowercasevowel || uppercasevowel)
    {
        cout<<"vowel"<<endl;

    }
    else
    {
        cout<<"consonant";
    }
    return 0;

}