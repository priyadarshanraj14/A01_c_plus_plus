#include<iostream> //finish
using namespace std;
int main()
{

    int x,y,s,i,m,n=0,p,d,total=0,grandtotal=0;
    int a[8],b[8];
    float l;
    for(int j=1; j<=8; j++)
    {

        n=0,m=0,p=0;
        int count1=-1;
        cout<<j<<"possibility"<<endl;
        for(x=1;x<=8;x++)
        {

            s=0;
            //count1 = x-1;
            for(y=1;y<=8;y++)
            {

                if(p==0)
                {
                    a[x-1]=x;
                    b[x-1]=j;
                    s=1;
                    p=1;
                    break;

                }
                for(i=0;i<x-1;i++)
                {
                   if( a[i]!=0 && b[i]!=0 )
                    {
                         //l= (y-b[i])/(x-a[i]);
                       // if(l==1 || l==-1 || a[i]==x || b[i]== y)
                        if( y-x==b[i]-a[i]||y+x==b[i]+a[i]|| y==b[i] || x==a[i] )
                        {
                            break;
                        }
                    }
                }
                if(i==x-1)
                {
                    a[x-1]=x;
                    b[x-1]=y;
                    s=1;
                    break;
                }
            }
            if(s==0)
            {
                 a[x-1]=0;
                 b[x-1]=0;
            }
            if(x==8)
            {
                n=0;
                for(int k=0;k<8;k++)
                {

                    if(a[k]!=0 && b[k]!=0)
                    {
                        n=n+1;
                    }
                  // cout<<"("<<a[k]<<","<<b[k]<<") ";
                }
              // cout<<endl;
                if(n==8)
                {
                    total=total+1;
                    for(int k=0;k<8;k++)
                    {
                        cout<<"("<<a[k]<<"-"<<b[k]<<") ";
                    }
                    n=0;
                
                    cout<<endl;
                }
                else
                {
                    n=0;
                }
            }
            if(x==8)
            {
                d=1;
                m=0;
                for(x=8;x>1;x--)
                {

                    m=m+1;
                    y=b[x-1]+1;
                    //count1=x-1;
                    for(y;y<=8;y++)
                    {
                        for(i=0;i<x-1;i++)
                        {
                              if( a[i]!=0 && b[i]!=0)
                               {
                                 // l=(y-b[i])/(x-a[i]);
                                   //if(l==1 || l==-1 || a[i]==x || b[i]==y)
                                  if( y-x==b[i]-a[i]||y+x==b[i]+a[i]|| y==b[i] || x==a[i] )
                                   {
                                       break;
                                   }
                               }
                        }
                           if(i==x-1)
                           {
                               a[x-1]=x;
                               b[x-1]=y;
                                if(x==8)
                                {
                                    n=0;
                                    for(int k=0;k<8;k++)
                                    {

                                      if(a[k]!=0 && b[k]!=0)
                                      {
                                         n=n+1;
                                      }
                                 //   cout<<"("<<a[k]<<","<<b[k]<<") ";
                                    }
                                   // cout<<endl;
                                    if(n==8)
                                    {
                                         total=total+1;
                                        for(int k=0;k<8;k++)
                                         {
                                            cout<<"("<<a[k]<<"-"<<b[k]<<") ";
                                         }
                                         n=0;
                                         cout<<endl;
                                     }
                                     else
                                     {
                                        n=0;
                                     }
                                }
                                  else
                                {
                                      d=0;
                                      break;
                                }
                           }   
                    }
                    if(d==0)
                    {
                        break;
                    }
                    
                }
            }
             if(m==7&&x==1)
             {
                 cout<<" total="<<total<<endl;
                grandtotal=grandtotal+total;
                total=0;
                 m==0;
                 break;
             }

        }
        if(j==8)
        {
           cout<<" grandtotal="<<grandtotal<<endl; 
        }
    }
  return 0;
}

