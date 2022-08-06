##include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={6,2,5,4,1,5,6};
    int n=sizeof(arr)/sizeof(int);
    int largest_area = find(arr,n);
    cout<<largest_area;
}