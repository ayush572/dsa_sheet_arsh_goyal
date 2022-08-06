#include<iostream>
using namespace std;
int palindrom_chk(string s1, string s2, int x, int y)
{
    //comparing from the first elements
    
    if(x==s1.length()+1 && y!=s2.length()+1)
        return 0;
    else if(x==s1.length()+1 && y==s2.length()+1)
        return 1;
    if(s1[x]==s2[y])
    {
        x++;
        y++;
    }
    else
        x++;
    return palindrom_chk(s1,s2,x,y);


    //comparing from the last elements
    // if(y==0)
    //     return 1;
    // else if(y!=0 && x==0)
    //     return 0;
    // if(s1[x-1] == s2[y-1])
    // {
    //     x--;
    //     y--;
    // }
    // else
    //     x--;
    // return palindrom_chk(s1,s2,x,y);
}
int main()
{
    string s1="geeksgforgeeks", s2="gregs";
    int i=0,j=0;
    //iterative
    while(i<s1.length() && j<s2.length())
    {
        if(s1[i] == s2[j])
            j++;
        i++;
    }
    if(i==s1.length() && j!=s2.length())
        cout<<"\nNot a subsequence";
    else    
        cout<<"\nYes subsequence";

    //recursive
    // int x=s1.length(),y=s2.length(); //when starting from last
    int x=0,y=0;
    int res=palindrom_chk(s1,s2,x,y);
    cout<<res;
    return 0;
}