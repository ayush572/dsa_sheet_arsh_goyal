#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
        Node *prev=NULL;
    };
Node *insert_end(Node *head, int x)
{
    Node *ptr=new Node, *temp;
    ptr->data=x;
    if(head==NULL)
    {
        head=ptr;
        return head;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    ptr->prev=temp;
    temp->next=ptr;
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
    // head->data=10;
    // head->prev=NULL;
    // head->next=temp1;
    // temp1->data=20;
    // temp1->next=temp2;
    // temp1->prev=head;
    // temp2->data=30;
    // temp2->prev=temp1;
    // temp2->next=NULL;
    head=NULL;
    cout<<"\nEnter the new value to be inserted at the end: ";
    cin>>val;
    head=insert_end(head,val);
    traversal(head);
    return 0;
}