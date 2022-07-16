#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top();
    s.pop();
    cout<<"\bsize:"<<s.size();
    s.push(40);
    while(s.empty()==false)
    {
        cout<<"\n"<<s.top();
        s.pop();
    }
    return 0;
}