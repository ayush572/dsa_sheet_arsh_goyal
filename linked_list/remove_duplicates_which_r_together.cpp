#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node * remove_dup(Node *head){
    if(head==NULL)
     return NULL;
    else if(head->next==NULL)
        return head;
    Node *track=head, *temp=head->next;
    while(temp!=NULL)
    {
        //for the last elements, if the last element is repeated as well
        if((temp->next)==NULL && (track->data==temp->data))
        {
            track->next=NULL;
            break;
        }
        else if(track->data==temp->data)
        {
            Node *temp1=temp;
            temp=temp->next;
            //makgin sure to delete the unnecessary elements in the memory that has been allocated
            //hence ensuring no memory leak
            delete(temp1);
        }
        else
        {
            track->next=temp;
            track=temp;
            temp=temp->next;
        }
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
    Node *nth,*head=new Node;
    // head=NULL; //when only NULL value is present as a corner case.
    Node *temp1=new Node;
    Node *temp2=new Node;
    Node *temp3=new Node;
    Node *temp4=new Node;
    Node *temp5=new Node;
    Node *new_head;
    head->data=10;
    temp1->data=20;
    temp2->data=20;
    temp3->data=30;
    temp4->data=30;
    temp5->data=30;
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp5;
    temp5->next=NULL;
    // cout<<"\nBefore new head: ";
    // traversal(head);
    new_head=remove_dup(head);
    // cout<<'\nAfter new head';
    traversal(new_head);
    return 0;
}