#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next;
    };
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
    return 0;
}