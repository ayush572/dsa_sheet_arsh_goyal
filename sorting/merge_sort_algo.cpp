#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int m, int r)
{
    int c[r-l+1];
    int i=l, j=m+1,k=0, g=l,h=0;
    while(i<m+1 && j<r+1)
    {
        if(arr[i]>arr[j])
        {
            c[k]=arr[j];
            j++;
            k++;
        }
        else if(arr[i]<arr[j])
        {
            c[k]=arr[i];
            i++;
            k++;
        }
        else if(arr[i]==arr[j])
        {
            c[k]=arr[i];
            i++;
            k++;
            c[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i<m+1)
    {
        c[k]=arr[i];
        i++;
        k++;
    }
    else if(j<r+1)
    {
        c[k]=arr[j];
        k++;
    }
    while(h<k)
    {
        arr[g]=c[h];
        g++;
        h++;
    }
}


//we have to inplace merge the sorted sub array.
//->low to mid-> one sub-array sorted, mid+1 to high, another sub-array sorted

//low<=mid<high --> means there will be at least two elements
void merge_sort(int arr[], int l, int r)
{
    if(r>l) //at least presence of 2 elements
    {
        int m = l+(r-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int arr[]={10,15,20,40,8,11,55};
    // int n=sizeof(arr)/sizeof(int);
    cout<<"\nMerged sorted subarray: ";
    int l=0, r=6;
    merge_sort(arr, l, r);
    for(int i=0;i<r-l+1;i++)
    {
        cout<<arr[i]<<" ";
    }
}