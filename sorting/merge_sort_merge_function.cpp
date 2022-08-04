#include<bits/stdc++.h>
using namespace std;

//we have to inplace merge the sorted sub array.
//->low to mid-> one sub-array sorted, mid+1 to high, another sub-array sorted

//low<=mid<high --> means there will be at least two elements
void merge_arrays(int a[], int low, int mid, int high, int n)
{
    int c[n];
    int i=low, j=mid+1,k=0;
    while(i<mid+1 && j<high+1)
    {
        if(a[i]>a[j])
        {
            c[k]=a[j];
            j++;
            k++;
        }
        else if(a[i]<a[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]==a[j])
        {
            c[k]=a[i];
            i++;
            k++;
            c[k]=a[j];
            j++;
            k++;
        }
    }
    if(i<mid+1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    else if(j<high+1)
    {
        c[k]=a[j];
        k++;
    }
    for(int l=0;l<k;l++)
    {
        cout<<c[l]<<" ";
    }
}
int main()
{
    int d[]={10,15,20,40,8,11,55};
    int n=sizeof(d)/sizeof(int);
    cout<<"\nMerged sorted subarray: ";
    int low=0, mid=3, high=6;
    merge_arrays(d,low,mid,high,n);

}