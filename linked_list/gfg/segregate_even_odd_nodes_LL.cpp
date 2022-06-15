#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *next=NULL;
    };


Node * segregate(Node * head)
{
    Node *even=head, *odd=head, *curr=head, *odd_first=NULL;
    int e=0, o=0;
    while(even!=NULL && even->data%2!=0)
    {
        if(even->data%2==0)
            e=1;
        even=even->next;
        head=even;
    }
    while(odd!=NULL && odd->data%2==0)
    {
        if(odd->data%2!=0)
            o=1;
        odd=odd->next;
    }
    odd_first=odd;
    if(head==NULL)
        head=odd_first;
    while(curr!=NULL)
    {
        if(curr->data%2==0 && curr->data!=even->data)
        {   
            even->next=curr;
            even=curr;
        }
        else if(curr->data%2!=0 && curr->data!=odd->data)
        {
            odd->next=curr;
            odd=curr;
        }
        curr=curr->next;
    }
    if(even!=NULL)
        even->next=odd_first;
    if(odd!=NULL)
        odd->next=NULL;
    return head;
    //this logic has been done in running the loops 2 times, one for finding the last element and 
    //other loop for putting the elements at the last positiion -> O(n) time complexity
    
    // Node *prev=NULL, *curr=head, *last=head, *ptr, *head1=head;
    //flag is used to track the first odd element
    // int flag=0;

    
    
    //taking the last pointer to the last element of the LL
    // while(last->next!=NULL)
    // {
    //     last=last->next;
    // }
    
    // while(flag!=1 && curr!=NULL)
    // {
    //     if(curr->data%2!=0)
    //     {
    //         ptr=curr;
    //         last->next=curr;
    //         last=curr;
    //         if(prev==NULL)
    //             head1=curr;
    //         else
    //             prev->next=curr->next;
    //         curr=curr->next;
    //         last->next=NULL;
    //         flag=1;
    //     }
    //     else
    //     {
    //         if(prev==NULL)
    //         {
    //             head1=curr;
    //             prev=curr;
    //             curr=curr->next;
    //         }
    //         else{
    //             prev=curr;
    //             curr=curr->next;
    //         }
    //     } 
    // }
    // while(curr!=NULL && curr->data!=ptr->data)
    // {
    //     if(curr->data%2!=0)
    //     {
    //         if(prev!=NULL)
    //         {
    //             prev->next=curr->next;
    //             last->next=curr;
    //             last=curr;
    //             curr=curr->next;
    //             last->next=NULL;
    //         }
    //         else if(prev==NULL)
    //         {
    //             last->next=curr;
    //             last=curr;
    //             curr=curr->next;
    //             head1=curr;
    //             last->next=NULL;
    //         }
    //     }
    //     else
    //     {
    //         if(prev==NULL)
    //         {
    //             prev=curr;
    //             curr=curr->next;
    //         }
    //         prev=curr;
    //         curr=curr->next;
    //     }
    // }
    // last->next=NULL;
    // return head1;
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
    Node *t6=new Node;
    Node *t7=new Node;
    t1->data=8;
    t2->data=17;
    t3->data=15;
    t4->data=12;
    t5->data=10;
    t6->data=5;
    t7->data=4;
    t1->next=t2;
    t2->next=t3;
    t3->next=t4;
    t4->next=t5;
    t5->next=t6;
    t6->next=t7;
    t7->next=NULL;
    cout<<"\nBefore the segregation\n";
    traversal(t1);
    t1=segregate(t1);
    cout<<"\nsegregation\n";
    traversal(t1);
    return 0;
}