#include<iostream>
using namespace std;
int main()
{
    int arr[]={-9,-12,-30,-4,-10,-5};
    int n=sizeof(arr)/sizeof(int);
    int max_sum=INT_MIN, sum,k=3;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    max_sum=max(sum,max_sum);
    for(int i=k;i<=n-1;i++)
    {
        sum-=arr[i-k];
        sum+=arr[i];
        max_sum=max(sum,max_sum);
    }
    cout<<"max_sum:"<<max_sum;

}