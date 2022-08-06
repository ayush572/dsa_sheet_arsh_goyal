#include<bits/stdc++.h>
using namespace std;
void insertionSrt(int arr[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
int main()
{
    int arr[]={20,5,40,60,10,30};
    int n=sizeof(arr)/sizeof(int);
    insertionSrt(arr,n);
    cout<<"\nSorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}