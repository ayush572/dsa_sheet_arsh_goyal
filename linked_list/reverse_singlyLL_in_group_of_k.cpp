//still left

#include<iostream>
#include<vector>
using namespace std;
vector <int> v;
struct Node{
    int d;
    Node *next=NULL;
};

//time complexity -> O(n), space complexity-> O(k) 
//this solution is same as the recursion but by using a vector here
Node *reverse_in_k_groups(Node * head, int k)
{
    if(head==NULL)
        return NULL;
    else if(head->next==NULL)
    {
        return head;
    }
    else{
        Node *curr=head, *ptr=head;
        int tr=k;
        while(curr!=NULL)
        {
            while(k>0 && curr!=NULL)
            {
                v.push_back(curr->d);
                curr=curr->next;
                k--;
            }
            k=tr;
            while(k>0 && ptr!=NULL)
            {
                ptr->d=v.back();
                v.pop_back();
                ptr=ptr->next;
                k--;
            }   
            k=tr;
        }
        return head;
    }
}

//recursive solution
Node *reverse_in_k_groups_iterative(Node * head, int k)
{
    if(head==NULL)
        return NULL;
    else if(head->next==NULL)
    {
        return head;
    }
    else{
        int flag=0,tr=k;
        Node *prev=NULL, *temp=head, *curr=head, *next;
        while(curr!=NULL)
        {
            temp=curr;
            while(k>0)
            {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                k--;
            }
            if(flag==0)
            {
                head=prev;
                flag=1;
            }
            temp->next=curr;
        }
        return head;
    }
}

void traversal(Node *ptr){
    Node *temp;
    temp=ptr;
    
    while(temp!=NULL)
    {
        cout<<temp->d<<"->";
        temp=temp->next;
    }
}
int main()
{
    int k;
    Node *head=new Node;
    Node *t1=new Node;
    Node *t2=new Node;
    Node *t3=new Node;
    Node *t4=new Node;
    Node *t5=new Node;
    head->d=10;
    head->next=t1;
    t1->d=20;
    t1->next=t2;
    t2->d=30;
    t2->next=t3;
    t3->d=40;
    t3->next=t4;
    t4->d=50;
    t4->next=NULL;
    cout<<"\nEnter the value of K: ";
    cin>>k;
    head=reverse_in_k_groups_iterative(head,k);
    traversal(head);
    return 0;
}
