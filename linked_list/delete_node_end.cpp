#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node *delete_end(Node *head){
    Node *ptr=head,*temp;
    if(head==NULL)
    {
        return head;
    }
    else if(head->next==NULL)
    {
        //here I am not deleting the head pointer but I am deallocating the memory by using delete, where the head was pointing to
        delete head;
        head=NULL;
        return head;
    }
    else{
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        delete ptr;
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
    head=delete_end(head);
    // head=delete_begin(head);
    // head=delete_begin(head);
    traversal(head);
    return 0;
}