#include<bits/stdc++.h>
using namespace std;
void merge_arrays(int a[], int b[], int c[], int n1,int n2)
{
    int i=0,j=0;
    while(i!=n1 && j!=n2)
    {
        if(a[i]>b[j])
        {
            c[i+j]=b[j];
            j++;
        }
        else if(a[i]<b[j])
        {
            c[i+j]=a[i];
            i++;
        }
        else if(a[i]==b[j])
        {
            c[i+j]=a[i];
            i++;
            c[i+j]=b[j];
            j++;
        }
    }
    if(i<n1)
    {
        c[i+j]=a[i];
        i++;
    }
    else if(j<n2)
    {
        c[i+j]=b[j];
        j++;
    }
}
int main()
{
    int x[]={1,3,9,12}, y[]={2,7,8,10};
    int n1=sizeof(x)/sizeof(int), n2=sizeof(y)/sizeof(int);
    int c[n1+n2];
    merge_arrays(x,y,c,n1,n2);
    cout<<"\nMerged arrays: ";
    for(int i=0;i<n1+n2;i++)
    {
        cout<<c[i]<<" ";
    }
}