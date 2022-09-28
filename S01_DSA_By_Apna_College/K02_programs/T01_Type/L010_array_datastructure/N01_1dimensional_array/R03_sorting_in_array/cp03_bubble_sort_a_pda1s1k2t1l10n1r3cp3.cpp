//(L10)array (data structure) // (N1) 1_dimensional_array // (R3) sorting in array
//(CP3) Question :- arrange the element of array in ascending order ?
// code :- (method 2) bubble sort
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many number you will give=";
    cin>>n;
    cout<<"enter your numbers here=";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
