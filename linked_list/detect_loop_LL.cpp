#include<bits/stdc++.h>
using namespace std;
struct Node{
    int d;
    Node *next=NULL;
};

//this is for the method 2
struct Node_change{
    int d, v=0;
    Node_change *next=NULL;
};
int detect_loop(Node *head)
{
    //method 1, time complexity->O(n^2), retraversing the linked list for every element to check if the address of that element
    //is present in the current Node's next.
    // Node *curr=head, *temp;
    // while(curr!=NULL)
    // {
    //     temp=head;
    //     while(temp!=curr)
    //     {
    //         if(temp==curr->next)
    //             return 1;
    //         temp=temp->next;
    //     }
    //     curr=curr->next;
    // }
    // return 0;

    //method 2, time complexity -> O(n), but the linked list has to be modified...
    // Node_change *curr=head;
    // while(curr!=NULL)
    // {
    //     if(curr->v==1)
    //         return 1;
    //     curr->v=1;
    //     curr=curr->next;
    // }
    // return 0;

    //method 3, the whole linked list is changed in such a way that it cannot be reconstructed back..., but detects the loop in O(n) time
    //time complexity -> O(n)
    // Node *curr=head, *next;
    // Node *dummy=new Node;
    // while(curr!=NULL)
    // {
    //     if(curr->next==dummy)
    //         return 1;
    //     next=curr->next;
    //     curr->next=dummy;
    //     curr=next;
    // }
    // return 0;

    //method 4, Hashing-> time complexity=O(n), space complexity=O(n)
    //this is basically the hashmap
    unordered_set<Node *> s;
    Node *curr=head;
    while(curr!=NULL)
    {
        if(s.find(curr)!=s.end())
            return 1;
        s.insert(curr);
        curr=curr->next;
    }
    return 0;
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
    t3->next=t1;

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
    res=detect_loop(head);
    cout<<res;
}