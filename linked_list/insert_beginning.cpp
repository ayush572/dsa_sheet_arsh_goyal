#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node *insert_begin(Node *head, int x)
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
    head=NULL; //when only NULL value is present as a corner case.
    // Node *temp1=new Node;
    // Node *temp2=new Node;
    int val,pos;
    // cout<<"enter the val to be inserted as a new head: ";
    // cin>>val;
    // head->data=10;
    // temp1->data=20;
    // temp2->data=30;
    // head->next=temp1;
    // temp1->next=temp2;
    // temp2->next=NULL;
    head=insert_begin(head,10);
    head=insert_begin(head,20);
    head=insert_begin(head,30);
    traversal(head);
    return 0;
}