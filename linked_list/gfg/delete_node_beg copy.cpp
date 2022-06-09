#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node *delete_begin(Node *head){
    Node *ptr=head;
    if(head==NULL)
    {
        return head;
    }
    head=head->next;
    delete ptr;
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
    // head=NULL; //when only NULL value is present as a corner case.
    Node *temp1=new Node;
    Node *temp2=new Node;
    int val,pos;
    head->data=10;
    temp1->data=20;
    temp2->data=30;
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=NULL;
    head=delete_begin(head);
    head=delete_begin(head);
    // head=delete_begin(head);
    traversal(head);
    return 0;
}