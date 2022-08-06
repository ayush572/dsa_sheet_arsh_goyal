#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };

//using loop
int find(Node *ptr, int x){
    int pos=1;
    while(ptr!=NULL)
    {
        if(ptr->data==x)
            return pos;
        pos++;
        ptr=ptr->next;
    }

    return -1;
}

//using recursion
int find_recur(Node *ptr, int x)
{
    if(ptr==NULL)
        return -1;
    else{
        if(ptr->data==x)
            return 1;
        int res=find_recur(ptr->next,x);
        if(res==-1)
            return -1;
        return res+1;
    }
}
int main()
{
    Node *head=new Node;
    Node *temp1=new Node;
    Node *temp2=new Node;
    int key,pos;
    cout<<"enter the key to be searched: ";
    cin>>key;
    head->data=10;
    temp1->data=20;
    temp2->data=30;
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=NULL;
    pos=find(head,key);
    cout<<"\nPosition using loop is: "<<pos;
    cout<<"\nNow using recursion";
    pos=find_recur(head,key);
    cout<<"\nPosition using recursion is: "<<pos;
    return 0;
}