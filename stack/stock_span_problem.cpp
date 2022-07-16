#include<bits/stdc++.h>
using namespace std;
int max_area=0,pos=0,calc=0;

//O(n^2) time complexity
//Basically you will have to use the two for loops, and for every ith element, the 
//inner for loop will be running from starting to (i-1)th element

//O(n) time complexity
//use the stack for the same to keep the track of the previous greater element
void stock_span(int arr[], int n)
{
    stack <int> S;
    cout<<1<<" ";
    S.push(0);
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[S.top()])
        {
            cout<<i-S.top()<<" ";
            S.push(i);
        }
        else
        {
            while(arr[S.top()]<arr[i])
            {
                S.pop();
                if(S.size()==0)
                    break;

            }
            if(S.size()==0)
            {
                S.push(i);
                cout<<i+1<<" ";
            }
            else
            {
                cout<<i-S.top()<<" ";
                S.push(i);
            }
            
        }
    }
}
int main()
{
    int arr[]={60,10,20,40,35,38,50,70,65};
    int n=sizeof(arr)/sizeof(int);
    stock_span(arr,n);
}