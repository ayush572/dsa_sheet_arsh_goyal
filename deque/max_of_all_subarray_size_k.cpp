#include<bits/stdc++.h>
using namespace std;
int main()
{
    //efficient solution O(n)
    //Idea -> we will always keep the largest element of the window at the top of the 
    //20,40,30,10,60
    int arr[]={10,7,9,6,12,8,15},k=3;
    int n=sizeof(arr)/sizeof(int);
    deque<int> dq;

    //processing the first k elements
    for(int i=0;i<k;i++)
    {
        //!dq.empty has been added for the first element
        if(!dq.empty() && arr[dq.back()]<arr[i])
            dq.pop_back();
        dq.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        //we are printing at the first place only because, at a time, only a single element will be inserted
        cout<<arr[dq.front()]<<" ";

        //this is basically checking that whether, the current index at the top of deque
        //is the part of the next subarray or not. If not, then we will pop it out.
        while(dq.front()<=(i-k))
        {
            dq.pop_front();
        }
        if(arr[dq.front()]<arr[i])
        {
            while(!dq.empty())
            {
                dq.pop_front();
            }
            dq.push_back(i);
        }
        else if(arr[dq.back()]<arr[i])
        {   
            while(arr[dq.back()]<arr[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        else
            dq.push_back(i);
    }
    cout<<arr[dq.front()];
}