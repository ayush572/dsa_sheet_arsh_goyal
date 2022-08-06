#include<iostream>
using namespace std;

void zeros_to_end(int arr[],int n)
{
    // int pos=-1;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]!=0 && pos!=-1)
    //     {
    //         arr[pos]=arr[pos]+arr[i];
    //         arr[i]=arr[pos]-arr[i];
    //         arr[pos]=arr[pos]-arr[i];
    //         pos++;
    //     }
    //     else if(arr[i]==0 && arr[pos]!=0){
    //         pos=i;
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";

    //this is a shorter code
    //here we are basically using the thing that
    int cnt=0;
    for(int i=0;i<cnt;i++){
        if(arr[i]!=0)
        {
            cnt++;
            arr[cnt]=arr[i];
        }
    }
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
    zeros_to_end(arr,size);
    cout<<"\nArray is: ";
    for(int i=0;i<size;i++)
    {   
        cout<<arr[i]<<" ";
    }
    return 0;
}