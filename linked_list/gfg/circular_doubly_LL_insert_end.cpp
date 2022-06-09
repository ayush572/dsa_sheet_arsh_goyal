#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
        Node *prev=NULL;
    };
Node * insert_beg(Node *head, int x){
    Node *temp=new Node;
    if(head==NULL)
    {
        head->data=x;
        head->prev=head;
        head->next=head;
        return head;
    }
    else{
        temp->data=x;
        temp->prev=head->prev;
        temp->next=head;
        head->prev->next=temp;
        head->prev=temp;
        return head;
    }
}

void traversal(Node *ptr){
    Node *temp;
    if(ptr==NULL)
        return;

    //using the while or for loop, we have been explicitely maintaining the csase for a SINGLE NODE.
    // temp=ptr->next;
    // cout<<ptr->data<<"->";
    // while(temp!=ptr)
    // {
    //     cout<<temp->data<<"->";
    //     temp=temp->next;
    // }

    //using a do while loop
    temp=ptr;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=ptr);
}
int main()
{
    int val;
    Node *head=new Node;
    Node *temp1=new Node;
    Node *temp2=new Node;
    Node *temp3=new Node;
    head->data=10;
    head->next=temp1;
    head->prev=temp2;
    temp1->data=20;
    temp1->next=temp2;
    temp1->prev=head;
    temp2->next=head;
    temp2->prev=temp1;
    temp2->data=30;
    cout<<"\nEnter the value: ";
    cin>>val;
    head=insert_beg(head,val);
    traversal(head);
    return 0;
}