#include<bits/stdc++.h>
using namespace std;
int max_area=0,pos=0,calc=0;

//O(n^2) time complexity
// void prev_greater(int arr[], int n)
// {
//     int max_ele;
//     for(int i=0;i<n;i++)
//     {
//         max_ele=-1;
//         for(int j=0;j<i;j++)
//         {
//             if(arr[j]>arr[i])
//                 max_ele=arr[j];
//         }
//         cout<<max_ele<<" ";
//     }
// }

//O(n) time complexity
//use the stack for the same to keep the track of the previous greater element
void prev_greater(int arr[], int n)
{
    stack <int> S;
    cout<<-1<<" ";
    S.push(0);
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[S.top()])
        {
            cout<<arr[S.top()]<<" ";
            S.push(i);
        }
        else
        {
            while(arr[i]>arr[S.top()])
            {
                S.pop();
                if(S.empty())
                    break;
            }
            if(S.empty())
            {
                S.push(i);
                cout<<-1<<" ";
            }
            else
            {
                cout<<arr[S.top()]<<" ";
                S.push(i);
            }
        }
    }
}
int main()
{
    int arr[]={15,10,18,12,4,16,2,8};
    int n=sizeof(arr)/sizeof(int);
    prev_greater(arr,n);
}