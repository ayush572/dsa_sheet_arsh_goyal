#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node *insert_element_pos(Node *head, int item, int pos){
    Node *ptr=head,*ptr1;
    Node *temp=new Node;
    int size=1;

    //corner case
    if(head==NULL && pos==1)
    {
        temp->data=item;
        temp->next=NULL;
        head=temp;
    }
    else{
        //IMPORTANT!
        //corner case
        if(pos==1)
        {
            temp->data=item;
            temp->next=head;
            head=temp;
            return head;
        }
        while(pos>1 && ptr!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
            pos--;
        }

        //we will not modify the linked list if the pos > sizeof linked list. Corner case
        if(pos>1 && ptr==NULL)
        {
            return head;
        }
        temp->data=item;
        ptr1->next=temp;
        temp->next=ptr;
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
    cout<<"\nEnter the data item and the position: ";
    cin>>data>>pos;
    head->data=10;
    temp1->data=20;
    temp2->data=30;
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=NULL;
    head=insert_element_pos(head,data,pos);
    // head=delete_begin(head);
    // head=delete_begin(head);
    traversal(head);
    return 0;
}