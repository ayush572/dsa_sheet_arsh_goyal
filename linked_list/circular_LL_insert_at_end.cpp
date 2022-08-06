#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node * insert_end(Node *ptr, int x){
    Node *ptr1,*temp=new Node;
    if(ptr==NULL)
    {
        temp->data=x;
        temp->next=temp;
    }
    //O(n) time complexity
    // else
    // {
    //     ptr1=ptr;
    //     do
    //     {
    //         ptr1=ptr1->next;
    //     }while(ptr1->next!=ptr);
    //     temp->data=x;
    //     ptr1->next=temp;
    //     temp->next=ptr;
    // }

    //O(1) time complexity
    else{
        temp->data=ptr->data;
        temp->next=ptr->next;
        ptr->next=temp;
        ptr->data=x;
        ptr=temp;
    }
    return ptr;
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
    cout<<"\nEnter the value: ";
    cin>>val;
    head=insert_end(head,val);
    traversal(head);
    return 0;
}