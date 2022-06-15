#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };


Node * swap(Node * head)
{
    Node *prev=head, *curr=head->next, *head1=head;
    int data;
    if(curr==NULL)
        return NULL;
    while(curr!=NULL && curr->next!=NULL)
    {
        data=prev->data;
        prev->data=curr->data;
        curr->data=data;
        prev=prev->next->next;
        curr=curr->next->next;
    }
    if(curr!=NULL)
    {
        if(curr->next==NULL)
        {
            data=prev->data;
            prev->data=curr->data;
            curr->data=data;
        }
    }
    return head1;
}
//using loop
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
    Node *t1=new Node;
    Node *t2=new Node;
    Node *t3=new Node;
    Node *t4=new Node;
    Node *t5=new Node;
    t1->data=8;
    t2->data=17;
    t3->data=15;
    t4->data=12;
    // t5->data=10;
    t1->next=t2;
    t2->next=t3;
    t3->next=t4;
    t4->next=NULL;
    // t5->next=NULL;
    cout<<"\nBefore the swapping\n";
    traversal(t1);
    t1=swap(t1);
    cout<<"\nswapped\n";
    traversal(t1);
    return 0;
}