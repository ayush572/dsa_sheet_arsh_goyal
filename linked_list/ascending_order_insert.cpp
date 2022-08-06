#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node *insert_ascending(Node *head, int item){
    Node *ptr1,*ptr=head;
    Node *temp=new Node;
    if(head==NULL)
    {
        temp->data=item;
        temp->next=NULL;
        head=temp;
    }
    else
    {
        while(item>ptr->data && ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        if(ptr->next==NULL)
        {
            temp->data=item;
            ptr->next=temp;
            temp->next=NULL;
        }
        else{
            temp->data=item;
            ptr1->next=temp;
            temp->next=ptr;
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
    int data,pos;
    Node *head=new Node;
    // head=NULL; //when only NULL value is present as a corner case.
    Node *temp1=new Node;
    Node *temp2=new Node;
    cout<<"\nEnter the data item: ";
    cin>>data;
    head->data=10;
    // temp1->data=20;
    // temp2->data=30;
    // head->next=temp1;
    // temp1->next=temp2;
    // temp2->next=NULL;
    head=insert_ascending(head,data);
    // head=delete_begin(head);
    // head=delete_begin(head);
    traversal(head);
    return 0;
}