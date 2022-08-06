#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
        Node *prev=NULL;
    };
Node *insert_begin(Node *head, int x)
{
    Node *temp=new Node;
    temp->data=x;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
void traversal(Node *ptr){
    Node *temp;
    temp=ptr;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main()
{
    int val;
    Node *head=new Node;
    Node *temp1=new Node;
    Node *temp2=new Node;
    head->data=10;
    head->prev=NULL;
    head->next=temp1;
    temp1->data=20;
    temp1->next=temp2;
    temp1->prev=head;
    temp2->data=30;
    temp2->prev=temp1;
    temp2->next=NULL;
    cout<<"\nEnter the new value to be inserted at the beginning: ";
    cin>>val;
    head=insert_begin(head,val);
    traversal(head);
    return 0;
}