#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node * delete_begin(Node *ptr){
    Node *ptr1,*temp;
    if(ptr==NULL)
    {
        return NULL;
    }
    else if(ptr->next=ptr)
    {
        delete ptr;
        return NULL;
    }
    else{
        ptr1=ptr;
        while(ptr1->next!=ptr)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr->next;
        delete ptr;
        return ptr1->next;
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
    temp1->data=20;
    temp1->next=temp2;
    temp2->next=head;
    temp2->data=30;
    head=delete_begin(head);
    traversal(head);
    return 0;
}