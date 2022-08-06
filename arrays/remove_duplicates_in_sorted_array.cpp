#include<iostream>
using namespace std;

int rem_dup(int arr[],int n)
{
    int j=0,dl=0;
    for(int i=1;i<n;i++)
    {
        if(arr[j]==arr[i])
        {
            //as soon as a duplicate is encountered, we increase the number of values for it
            dl++;
        }
        else if(arr[j]!=arr[i])
        {
            //here we are keeping the first element of every repeating number as intact and changing the duplicated value by it
            arr[j+1]=arr[i];
            j=i;
        }
    }
    n=n-dl;
    return n;
}
int main(){
    int size;
    cout<<"\nEnter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"\nEnter element "<<i+1<<":";
        cin>>arr[i];
    }
    size=rem_dup(arr,size);
    cout<<"\nSize is: "<<size;
    cout<<"\nArray is: ";
    for(int i=0;i<size;i++)
    {   
        cout<<arr[i]<<" ";
    }
    return 0;
}