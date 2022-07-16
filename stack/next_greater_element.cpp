#include<bits/stdc++.h>
using namespace std;
int max_area=0,pos=0,calc=0;

//O(n^2) time complexity
//simply running the loop twice from the current element to the starting

//O(n) time complexity
//use the stack for the same to keep the track of the previous greater element
void next_greater(int arr[], int n)
{
    stack <int> S;
    int arr2[n];
    arr2[n-1]=-1;
    S.push(n-1);
    for(int i=n-2;i>-1;i--)
    {
        if(arr[i]<arr[S.top()])
        {
            arr2[i]=arr[S.top()];
            S.push(i);
        }
        else
        {
            while(arr[i]>arr[S.top()])
            {
                S.pop();
                if(S.empty())
                    break;
            }
            if(S.empty())
            {
                S.push(i);
                arr[i]=-1;
            }
            else
            {
                arr2[i]=arr[S.top()];
                S.push(i);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
}
int main()
{
    int arr[]={5,15,10,8,6,12,9,18};
    int n=sizeof(arr)/sizeof(int);
    next_greater(arr,n);
}