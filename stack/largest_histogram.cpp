#include<bits/stdc++.h>
using namespace std;
int max_area=0,pos=0,calc=0;

//O(n^2) time complexity
// int find(int arr[], int n)
// {
//     int new_area,area=0;
//     for(int i=0;i<n;i++)
//     {
//         pos=i;
//         new_area=0;
//         //traversing to the left side from the given position i
//         for(int j=pos;j>-1;j--)
//         {
//             if(arr[j]>=arr[pos])
//             {
//                 new_area+=arr[pos];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         //traversing to the right side from the given position i
//         for(int j=pos+1;j<n;j++)
//         {
            
//             if(arr[j]>=arr[pos])
//             {
//                 new_area+=arr[pos];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         area = max(area,new_area);
//     }
//     return area;
// }
int main()
{
    int arr[]={2,5,1};
    int n=sizeof(arr)/sizeof(int);
    // int largest_area = find(arr,n);
    // cout<<largest_area;
}