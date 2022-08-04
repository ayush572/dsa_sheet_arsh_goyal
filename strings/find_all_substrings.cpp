#include<iostream>
using namespace std;
int main()
{
    string s1="geeksforgeeks", s2="geeks";
    for(int i=0;i<s1.length();i++)
    {
        if(s1.substr(i,s2.length())==s2)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}