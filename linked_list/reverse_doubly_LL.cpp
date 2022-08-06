#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
        Node *prev=NULL;
    };
Node *reverse(Node *head)
{
    if(head==NULL)
        return NULL;
    else if(head->next==NULL)
        return head;
    //reversing the prev and next pointers for the current head node
    head->prev=head->next;
    head->next=NULL;

    //starting from the 2nd node
    //instead of creating a new node, keep the track of prev
    Node *temp=head->prev, *prev=NULL;
    while(temp->next!=NULL)
    {
        //reversing the prev and next pointers for all the nodes
        prev=temp->prev;
        temp->prev=temp->next;
        temp->next=prev;
        temp=temp->prev;
    }
    temp->next=temp->prev;
    temp->prev=NULL;
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
    Node *temp3=new Node;
    head->data=10;
    head->prev=NULL;
    head->next=temp1;
    temp1->data=20;
    temp1->next=NULL;
    temp1->prev=head;
    // temp2->data=30;
    // temp2->prev=temp1;
    // temp2->next=temp3;
    // temp3->data=40;
    // temp3->next=NULL;
    // temp3->prev=temp2;
    head=reverse(head);
    traversal(head);
    return 0;
}