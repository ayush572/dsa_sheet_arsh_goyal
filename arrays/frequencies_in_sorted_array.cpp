#include<iostream>
using namespace std;

int main(){
    int cnt=1,i;
    int size;
    cout<<"\nEnter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"\nEnter element "<<i+1<<":";
        cin>>arr[i];
    }
    for(i=1;i<size;i++)
    {
        if(arr[i-1]==arr[i])
        {
            cnt++;
        }
        else
        {
            cout<<arr[i-1]<<" "<<cnt<<"\n";
            cnt=1;
        }
    }
    cout<<arr[i-1]<<" "<<cnt;
    return 0;
}