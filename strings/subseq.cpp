#include<iostream>
using namespace std;
//recursive solution
int str_comp(string s1,string s2,int i,int j)
{
    if(s1[i]==s2[j])
    {
        i++;
        j++;
        if(j<=s2.length() && i==s1.length())
        {
            return -1;
        }
        if(j==s2.length() and i<=s1.length())
            return 1;
        return str_comp(s1,s2,i,j);
    }
    else if(s1[i]!=s2[j])
    {
        
        i++;
        if(i==s1.length())
            return -1;
        return str_comp(s1,s2,i,j);
    }
}
int main()
{
    string s1,s2,s3;
    int i=0,j=0,res=0;
    cout<<"eneter the string s1:";
    cin>>s1;
    cout<<"eneter the string s2:";
    cin>>s2;
    // //iterative solution
    // for(i=0;i<s1.length();i++)
    // {
    //     if(s2[j]==s1[i])
    //         j++;
    // }
    // if(j==s2.length())
    //     cout<<"subsequence present";
    // else
    //     cout<<"not";
    
    //recursive solution
    res=str_comp(s1,s2,j,j);
    if(res==-1)
        cout<<"not subseq";
    else
        cout<<"subseq";
    return 0;
}