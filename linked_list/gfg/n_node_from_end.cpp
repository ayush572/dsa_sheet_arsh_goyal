#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node *nth_node_from_end(Node *head, int n){
    if(head==NULL)
     return NULL;
    else{
        Node *temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        n=cnt-n;
        temp=head;
        if(n>=0)
        {
            while(n!=0)
            {
                temp=temp->next;
                n--;
            }
        }
        else
        {
            return NULL;
        }
        return temp;
    }
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
    int n;
    Node *nth,*head=new Node;
    // head=NULL; //when only NULL value is present as a corner case.
    Node *temp1=new Node;
    Node *temp2=new Node;
    Node *temp3=new Node;
    Node *temp4=new Node;
    Node *temp5=new Node;
    head->data=10;
    temp1->data=20;
    temp2->data=30;
    // temp3->data=40;
    // temp4->data=50;
    // temp5->data=60;
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=NULL;
    // temp3->next=temp4;
    // temp4->next=NULL;
    // temp5->next=NULL;
    cout<<"\nType n:";
    cin>>n;
    nth=nth_node_from_end(head,n);
    traversal(head);
    cout<<"\nmiddle:"<<nth->data;
    return 0;
}