#include<iostream>
using namespace std;
int main()
{
    string s1="abcba";
    int k;
    for(int i=0;i<s1.length()/2;i++)
    {
        if(s1[i]==s1[s1.length()-i-1])
            k=1;
        else
        {
            k=0;
            break;
        }
    }
    if(k==0)
        cout<<"\nNot palindrom";
    else
        cout<<"\nPalindrom";
    return 0;
}