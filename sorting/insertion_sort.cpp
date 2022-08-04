#include<bits/stdc++.h>
using namespace std;
void insertionSrt(int arr[], int n)
{
    int j;
    for(int i=0;i<n;i++)
    {
        j=0;
        while(j<i && arr[j]>arr[i])
        {
                swap(arr[j],arr[i]);
                j++;
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