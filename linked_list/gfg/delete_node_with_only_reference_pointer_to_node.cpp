#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };


void delete_ref(Node * node)
{
    while(node->next->next!=NULL)
    {
        node->data=node->next->data;
        node=node->next;
    }
    node->data=node->next->data;
    delete(node->next);
    node->next=NULL;
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
    t1->data=10;
    t2->data=20;
    t3->data=30;
    t4->data=40;
    t5->data=50;
    t1->next=t2;
    t2->next=t3;
    t3->next=t4;
    t4->next=t5;
    t5->next=NULL;
    cout<<"\nNow Before delete the node of reference\n";
    traversal(t1);
    delete_ref(t1);
    cout<<"\nNow after deleting the node of reference\n";
    traversal(t1);
    return 0;
}