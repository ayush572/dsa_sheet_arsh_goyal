#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int no;
    Node *next;
    Node(int n)
    {
        no = n;
        next=NULL;
    }
};
class q{
    Node *front, *rear;
    int size;
    public:
    q()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int n);
    void dequeue();
    int getFront();
    int getRear();
    int isFull();
    int isEmpty();    
};
void q :: enqueue(int n)
{
    Node *node = new Node(n);
    if(front==NULL)
    {
        front=node;
        rear=node;
    }
    else
    {
        rear->next=node;
        rear=rear->next;
    }
}
void q::dequeue()
{
    if(front==NULL)
    {
        cout<<"\nDequeue not possible";
    }
    else{
        if(front == rear)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            Node *temp = front;
            front=front->next;
            delete temp;
        }
    }
}
int q :: getFront()
{
    if(front == NULL)
        return -1;
    return front->no;
}
int q :: getRear()
{
    if(rear == NULL)
        return -1;
    return rear->no;
}
int q :: isEmpty()
{
    if(front == NULL)
        return 1;
    return 0;
}
int main()
{
    int no,ch,x,size;
    cout<<"\nEnter size: ";
    cin>>size;
    q Q;
    do
    {
        cout<<"\n1)Enqueue";
        cout<<"\n2)Dequeue";
        cout<<"\n3)getFront";
        cout<<"\n4)getRear";
        cout<<"\n5)isEmpty";
        cout<<"\n6)Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: 
                    cout<<"\nEnter number to be inserted : ";
                    cin>>no;
                    Q.enqueue(no);
                    break;
            case 2: 
                    Q.dequeue();
                    break;
            case 3: 
                    x = Q.getFront();
                    cout<<x;
                    break;
            case 4: 
                    x = Q.getRear();
                    cout<<x;
                    break;
            case 5: 
                    x = Q.isEmpty();
                    cout<<x;
                    break;
            case 6: 
                    exit(0);
            default:
                    cout<<"\nEnter correct choice!";
        }
    } while (ch!=7);
    return 0;
}