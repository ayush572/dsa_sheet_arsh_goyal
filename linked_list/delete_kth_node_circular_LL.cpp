#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };
Node * delete_kth_node(Node *head, int k){
    Node *ptr,*temp;
    if(head==NULL)
    {
        return NULL;
    }
    else if(head->next==head && k==1)
    {
        delete head;
        return NULL;
    }
    else if(k==1)
    {
        ptr=head;
        ptr->data=ptr->next->data;
        temp=ptr->next;
        ptr->next=ptr->next->next;
        delete temp;
        return head;
    }
    //O(n) time solution
    else{
        ptr=head;
        while(k!=2)
        {
            ptr=ptr->next;
            k--;
        }
        temp=ptr->next;
        ptr->next=ptr->next->next;
        delete temp;
        return head;
    }

    //O(1) time solution
    // else{
    //     head->data=head->next->data;
    //     temp=head->next;
    // head->next=head->next->next;
    
    // delete temp;
    // return head;
    // }
    
}

void traversal(Node *ptr){
    Node *temp;
    if(ptr==NULL)
        return;
    //using a do while loop
    temp=ptr;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=ptr);
}
int main()
{
    int k;
    Node *head=new Node;
    Node *temp1=new Node;
    Node *temp2=new Node;
    Node *temp3=new Node;
    head->data=10;
    head->next=temp1;
    temp1->data=20;
    temp1->next=temp2;
    temp2->next=temp3;
    temp2->data=30;
    temp3->next=head;
    temp3->data=40;
    cout<<"\nEnter the node to be deleted: ";
    cin>>k;
    head=delete_kth_node(head,k);
    traversal(head);
    return 0;
}