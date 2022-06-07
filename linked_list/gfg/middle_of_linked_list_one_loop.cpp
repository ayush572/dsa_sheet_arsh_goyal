#include<bits/stdc++.h>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };

//this uses O(n) auxiliary space.
// int middle_element(Node *head){
//     Node *temp=head;
//     vector <int> v;
//     int cnt=0;
//     if(head==NULL)
//         return -1;
//     while(temp!=NULL)
//     {
//         Node *ptr=new Node;
//         // ptr->data=cnt;
//         // ptr->next=temp->next;
//         v.push_back(temp->data);
//         temp=temp->next;
//         cnt++;
//     }
//     int mid=cnt/2;
//     return v[mid];
// }

//using slow and fast pointers... fast = 2 * slow
Node * middle_element(Node *head){
    Node *slow=head,*fast=head;
    int cnt=0;
    if(head==NULL)
        return NULL;
    while(fast != NULL && fast->next!=NULL)
    {
        // if(fast->next==NULL)
        //     break;
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
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