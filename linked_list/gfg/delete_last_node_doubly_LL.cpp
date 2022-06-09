#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
        Node *prev=NULL;
    };
Node *del(Node *head)
{
    Node *temp=head;
    if(head==NULL)
        return NULL;
    else if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    //reversing the prev and next pointers for the current head node
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp;
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
    Node *temp3=new Node;
    head->data=10;
    head->prev=NULL;
    head->next=temp1;
    temp1->data=20;
    temp1->next=temp2;
    temp1->prev=head;
    temp2->data=30;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->data=40;
    temp3->next=NULL;
    temp3->prev=temp2;
    head=del(head);
    traversal(head);
    return 0;
}