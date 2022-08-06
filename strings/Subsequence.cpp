#include<iostream>
using namespace std;
string s="";
int i=0;
void print_subseq(string s, int i, string s1)
{
    if(i==s1.length())
    {
        cout<<s;
        return;
    }
    else
    {
        //the character of s1 has not been included in the string s
        print_subseq(s,i+1,s1);
        s=s+s1[i];
        i++;
        //now the character from s1 has been included in the string s
        print_subseq(s,i,s1);
    }
}
int main()
{
    string s1="abc";
    print_subseq("",0,s1);
    return 0;
}