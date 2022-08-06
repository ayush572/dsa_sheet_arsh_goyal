#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node *insert_end(Node *head, int x)
{
    Node *temp,*temp1=new Node;
    temp1->data=x;
    temp=head;
    if(head==NULL)
    {
        head=temp1;
        return head;
    }
    else{
        while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=temp1;
    }
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
    // cout<<"enter the val to be inserted as a new head: ";
    // cin>>val;
    // head->data=10;
    // temp1->data=20;
    // temp2->data=30;
    // head->next=temp1;
    // temp1->next=temp2;
    // temp2->next=NULL;
    head=insert_end(head,10);
    head=insert_end(head,20);
    head=insert_end(head,30);
    traversal(head);
    return 0;
}