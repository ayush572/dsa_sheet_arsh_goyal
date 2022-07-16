#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int arr[n], top1=-1, top2=n, ch=0, ch1=0;
    while(ch!=6)
    {
        cout<<"\n1.Push";
        cout<<"\n2.Pop";
        cout<<"\n3.Check size";
        cout<<"\n4.Top of stack";
        cout<<"\n5.Check for empty stack";
        cout<<"\n6. Exit";
        cout<<"\nWhat would you like to do?:";
        cin>>ch;
        switch(ch)
        {
            case 1: 
                    if(top1 + 1 == top2)
                    {
                        cout<<"\nArray Full";
                    }
                    else
                    {
                        int no;
                        cout<<"\nStack 1";
                        cout<<"\nStack 2";
                        cout<<"\nEnter: ";
                        cin>>ch1;
                        cout<<"\nEnter the no: ";
                        cin>>no;
                        if(ch1==1)
                        {
                            top1++;
                            arr[top1]=no;
                        }
                        else if(ch1==2)
                        {
                            top2--;
                            arr[top2]=no;
                            cout<<"here: "<<arr[top2];
                        }
                    }
                        
                    break;
            case 5:
                    cout<<"\nStack 1";
                    cout<<"\nStack 2";
                    cout<<"\nEnter: ";
                    cin>>ch1;
                    if(ch1==1)
                    {
                        if(top1==-1)
                        {
                            cout<<"\nEmpty";
                        }
                        else
                            cout<<"\nNot empty";
                    }
                    else if(ch1==2)
                    {
                        if(top2==n)
                        {
                            cout<<"\nEmpty";
                        }
                        else
                            cout<<"\nNot empty";
                    }
                    break;
            case 3:
                    cout<<"\nStack 1";
                    cout<<"\nStack 2";
                    cout<<"\nEnter: ";
                    cin>>ch1;
                    if(ch1==1)
                    {
                        cout<<"\nSize is : "<<top1+1;
                    }
                    else if(ch1==2)
                    {
                        cout<<"\nSize is:"<<n-top2;
                    }
                    break;
            case 2:
                    cout<<"\nStack 1";
                    cout<<"\nStack 2";
                    cout<<"\nEnter: ";
                    cin>>ch1;
                    if(ch1==1)
                    {
                        if(top1==-1)
                        {
                            cout<<"\nNot possible to pop";
                        }
                        else
                            top1--;
                    }
                    else if(ch1==2)
                    {
                        if(top2==n)
                        {
                            cout<<"\nNot possible to pop";
                        }
                        else
                            top2++;
                    }
                    break;
            case 4:
                    cout<<"\nStack 1";
                    cout<<"\nStack 2";
                    cout<<"\nEnter: ";
                    cin>>ch1;
                    if(ch1==1)
                    {
                        if(top1==-1)
                        {
                            cout<<"\nEmpty";
                        }
                        else
                            cout<<"\n"<<arr[top1];
                    }
                    else if(ch1==2)
                    {
                        if(top2==n)
                        {
                            cout<<"\nEmpty";
                        }
                        else
                            cout<<"\n"<<arr[top2];
                    }
                    break;
            case 6:
                    exit (0);
            default: 
                    cout<<"\nInvalid choice";
        }
    }
    return 0;
}