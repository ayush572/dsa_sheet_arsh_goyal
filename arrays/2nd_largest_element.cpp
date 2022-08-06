#include<iostream>
using namespace std;

int largest_ele_2nd(int arr[],int n){
    //next_max refers to 2nd max    
    int max=0,next_max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max])
        {
            next_max=max;
            max=i;
        }
        else if(arr[i]<arr[max])
        {
            if(arr[i]>arr[next_max])
            {
                next_max=i;
            }
        }
    }
    if(next_max==max)
        return -1;
    return arr[next_max];
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
    int el=largest_ele_2nd(arr,size);
    cout<<el;
    return 0;
}