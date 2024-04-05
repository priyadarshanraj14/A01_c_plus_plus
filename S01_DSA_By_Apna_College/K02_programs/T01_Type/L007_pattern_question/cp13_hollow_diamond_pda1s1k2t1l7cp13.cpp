// (L7) pattern_question 
// (CP13) Question :- print hollow diamond pattern using any characte:
// given n, print diamond with 2*n rows?

// example :- 

// enter the size of diamond n=5
// enter any character=#
//     #    
//    # #   
//   #   #  
//  #     # 
// #       #
// #       #
//  #     # 
//   #   #  
//    # #   
//     #    

// code :-

#include<iostream>
using namespace std;
int main()
{
    int n;
    char a;
    cout<<"enter the size of diamond n (natural number)=";
    cin>>n;
    cout<<"enter any character=";
    cin>>a;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
            {
                cout<<a;
            }
            else
            {
               cout<<" "; 
            }
        }
        cout<<endl;
    }
     for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
           if(j==1 || j==2*i-1)
            {
                cout<<a;
            }
            else
            {
               cout<<" "; 
            }
        }
        cout<<endl;
    }
    return 0;
}