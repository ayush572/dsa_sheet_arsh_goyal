#include<iostream>
using namespace std;
int combi(int coins[], int n, int sum)
{
    if(sum==0)
        return 1;
    if(n==0)
        return 0;
    int res=combi(coins,n-1,sum);
    if(coins[n-1]<=sum)
        res=res+combi(coins, n, sum-coins[n-1]);
    return res;
}
int main()
{
    int coins[]={2,5,3,6}, sum=10;
    int n =sizeof(coins)/sizeof(int);
    int tot=combi(coins,n,sum);
    cout<<tot;
    return 0;
}