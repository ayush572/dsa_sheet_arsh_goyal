#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
        Node *prev=NULL;
    };
Node *creation(Node *head, int x)
{
    Node *temp=new Node;
    temp->data=x;
    temp->next=head;
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
    Node *head=new Node;
    Node *temp1=new Node;
    Node *temp2=new Node;
    head->data=10;
    head->next=temp1;
    temp1->data=20;
    temp1->next=temp2;
    temp1->prev=head;
    temp2->data=30;
    temp2->prev=temp1;
    traversal(head);
    return 0;
}