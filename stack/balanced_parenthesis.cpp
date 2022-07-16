#include<bits/stdc++.h>
using namespace std;
bool balanced_paren(string st)
{
    stack<char> s;
    //this is for each loop
    for(char x : st)
    {
        if(x=='{' || x=='(' ||x=='[' )
            s.push(x);
        else if(s.empty()==1)
            return 0;
        else if(x==')' && s.top()=='(')
        {
            s.pop();
        }
        else if(x=='}' && s.top()=='{')
        {
            s.pop();
        }
        else if(x==']' && s.top()=='[')
        {
            s.pop();
        }   
    }
    return s.empty();
}
int main()
{
    string st="{})";
    int res=balanced_paren(st);
    cout<<"\nresult:"<<res;
}