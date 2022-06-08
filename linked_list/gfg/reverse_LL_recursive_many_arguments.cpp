#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node * reverse_recur(Node *prev, Node *curr, Node *next){
    if(curr==prev)
     return NULL;
    else if(curr==NULL)
        return prev;
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    return reverse_recur(prev,curr,next);
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
    Node *nth,*head=new Node;
    // head=NULL; //when only NULL value is present as a corner case.
    Node *temp1=new Node;
    Node *temp2=new Node;
    Node *temp3=new Node;
    Node *temp4=new Node;
    Node *new_head;
    head->data=10;
    temp1->data=20;
    temp2->data=30;
    temp3->data=40;
    temp4->data=50;
    // temp5->data=60;
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=NULL;
    // temp5->next=NULL;
    // cout<<"\nBefore new head: ";
    // traversal(head);
    new_head=reverse_recur(NULL,head,head->next);
    // cout<<'\nAfter new head';
    traversal(new_head);
    return 0;
}