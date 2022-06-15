#include<bits/stdc++.h>
using namespace std;
struct Node{
    int d;
    Node *next=NULL;
};

int detect_loop_n_remove(Node *head)
{
    Node *slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
                if(slow==fast)
                {
                    do{
                        slow=slow->next;
                        if(slow->next==fast)
                        {
                            slow->next=NULL;
                            return 1;
                        }
                    }while(slow->next!=fast);
                }
            }
        }
    }
    return 0;
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
    Node *head=new Node;
    Node *t1=new Node;
    Node *t2=new Node;
    Node *t3=new Node;
    head->d=10;
    head->next=t1;
    t1->d=15;
    t1->next=t2;
    t2->d=20;
    t2->next=t3;
    t3->d=25;
    t3->next=NULL;

    // while using method 2
    // Node_change *head=new Node_change;
    // Node_change *t1=new Node_change;
    // Node_change *t2=new Node_change;
    // Node_change *t3=new Node_change;
    // head->d=10;
    // head->next=t1;
    // t1->d=15;
    // t1->next=t2;
    // t2->d=20;
    // t2->next=t3;
    // t3->d=25;
    // t3->next=t2;
    int res;
    res=detect_loop_n_remove(head);
    if(res==0)
    {
        cout<<"No loop detected!";
        traversal(head);
    }
    else{
        cout<<"\nLoop detected and removed!\n";
        traversal(head);
    }
}