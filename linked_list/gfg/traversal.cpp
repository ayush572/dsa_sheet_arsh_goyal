#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };

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

//using recursion
void traversal_recur(Node *ptr)
{
    if(ptr==NULL)
        return;
    cout<<ptr->data<<"->";
    traversal_recur(ptr->next);
}
int main()
{
    Node *head=new Node;
    Node *temp1=new Node;
    Node *temp2=new Node;
    head->data=10;
    temp1->data=20;
    temp2->data=30;
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=NULL;
    traversal(head);
    cout<<"\nNow using recursion\n";
    traversal_recur(head);
    return 0;
}