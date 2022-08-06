#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node *middle_element(Node *head){
    Node *temp, *middle;
    int size=0,mid;
    temp=head;
    
    while(temp!=NULL)
    {
        size++;
        temp=temp->next;
    }
    
    cout<<"size:"<<size<<"\n";
    if(size==0)
    {
        return NULL;
    }
    else{
        mid=size/2+1;
        temp=head;
        while(mid!=1)
        {
            temp=temp->next;
            mid--;
        }
        middle=temp;
    }
    return middle;
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
    Node *middle,*head=new Node;
    // head=NULL; //when only NULL value is present as a corner case.
    Node *temp1=new Node;
    Node *temp2=new Node;
    Node *temp3=new Node;
    Node *temp4=new Node;
    Node *temp5=new Node;
    head->data=10;
    temp1->data=20;
    temp2->data=30;
    temp3->data=40;
    temp4->data=50;
    temp5->data=60;
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp5;
    temp5->next=NULL;
    middle=middle_element(head);
    // head=delete_begin(head);
    // head=delete_begin(head);
    traversal(head);
    cout<<"\nmiddle:"<<middle->data;
    return 0;
}