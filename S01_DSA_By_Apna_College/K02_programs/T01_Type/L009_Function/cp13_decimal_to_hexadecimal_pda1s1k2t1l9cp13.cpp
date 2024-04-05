// (L9) Function 
// (CP13) Question :- decimal to hexadecimal conversion

// code :-

#include<bits/stdc++.h>
using namespace std;

string decimal_to_hexadecimal (int n)
{
    int x=1;
    string ans=" "; // empty string
    while(x<=n)
    {
        x*=16;
    }
    x/=16;
    while(x>0)
    {
        int lastdigit = n/x;
        n-=(lastdigit*x);
        x/=16;
        if(lastdigit<9)
        {
            ans=ans+to_string(lastdigit);
        }
        else
        {
            char c= 'a'+ lastdigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}

int32_t main()
{
    int n;
    cout<<"enter any decimal number (natural number)= ";
    cin>>n;
    cout<<decimal_to_hexadecimal(n)<<endl;
    return 0;
}
// string,push_back,to_string :- we will study later.