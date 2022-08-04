#include<iostream>
using namespace std;
int main()
{
    string s1="practisingcoding";
    int cnt[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        cnt[s1[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]>0)
        {
            cout<<char(i+'a')<<" "<<cnt[i]<<"\n";
        }
    }
    return 0;
}