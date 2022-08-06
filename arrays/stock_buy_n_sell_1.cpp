#include<iostream>
using namespace std;

int tot_profit(int arr[],int n){
    int max=0,min=0;
    int prof=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max])
            max=i;
        else if(arr[i]<arr[max])
        {
            if(max!=min)
            {
                prof+=(arr[max]-arr[min]);
            }
                
            max=i;
            min=i;
        }
    }
    prof+=arr[max]-arr[min];
    return prof;
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
    int profit=tot_profit(arr, size);
    cout<<profit;
    return 0;
}