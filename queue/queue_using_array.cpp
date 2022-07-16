#include<bits/stdc++.h>
using namespace std;
class q{
    int arr[5],front,rear,size;
    public:
    q(int s){
        front=-1;
        rear=-1;
        size=s;
        arr[size];
    }
    void enqueue(int no);
    void dequeue();
    int getFront();
    int getRear();
    int isFull();
    int isEmpty();
};

//enqueue for linear array
// void q :: enqueue(int no)
// {   
//     cout<<size;
//     if(front == -1)
//     {
//         front = 0;
//         rear = 0;
//         arr[front] = no;
//     }
//     else if(rear == (size-1))
//         cout<<"\nQueue Full";
//     else
//     {
//         if(front == -1 && rear == -1)
//         {
//             front = 0;
//             rear = 0;
//             arr[front] = no;
//         }
//         else
//         {
//             rear++;
//             arr[rear] = no;
//         }
//         cout<<"\nElement Inserted";
//     }
// }

//dequeue for linear array
// void q :: dequeue()
// {
//     if(front == -1 && rear == -1)
//     {
//         cout<<"\nNot possible! Queue alreay empty";
//     }
//     else
//     {
//         if(front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         else
//         {
//             int temp=front;
//             while(temp!=rear)
//             {
//                 arr[temp] = arr[temp+1];
//                 temp++;
//             }
//             rear--;
//         }
//         cout<<"\nElement deleted";
//     }
// }

//circular array
// void q ::enqueue(int no)
// {
//     if ((front == 0 && rear == size - 1) || (front == rear + 1))
//     {
//         cout << "Queue is Full\n";
//         return;
//     }
//     if (front == -1)
//     {
//         front = 0;
//         rear = 0;
//     }
//     else
//     {
//         rear = (rear + 1) % size;
//     }
//     arr[rear] = no;
// }
//enqueue for circular array
void q :: enqueue(int no)
{
    if(((rear+1)%size)==front)
    {
        cout<<"\nQueue Full!";
    }
    else
    {
        if(front == -1)
        {
            front = 0;
            rear = 0;
            arr[front] = no;
        }
        else
        {
            rear = (rear + 1)%size;
            arr[rear] = no;
        }
    }
}

//dequeue circular
void q ::dequeue()
{
    if (front == -1)
    {
        cout << "Queue is Empty\n";
        return;
    }

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == size - 1)
            front = 0;
        else
            front = front + 1;
    }
}
//dequeue for circular array
// void q :: dequeue()
// {
//     if(front == -1)
//         cout<<"Queue empty";
//     else
//     {
//         if(front == rear)
//         {
//             front = -1;
//             rear = -1;
//         }
//         front = (front + 1)%size;
//         cout<<"\nElement Deleted!";
//     }
// }
int q :: getFront()
{
    if(front == -1)
    {
        cout<<"\nQueue empty!";
        return -1;
    }
    else
    {
        return arr[front];
    }
}
int q :: getRear()
{
    if(rear == -1)
    {
        cout<<"\nQueue empty!";
        return -1;
    }
    else
    {
        return arr[rear];
    }
}
int q :: isFull()
{
    if((rear+1) == front)
    {
        return 1;
    }
    return 0;
}
int q :: isEmpty()
{
    if(front == -1)
        return 1;
    return 0;
}
int main()
{
    int no,ch,x,size;
    cout<<"\nEnter size: ";
    cin>>size;
    q Q(size);
    do
    {
        cout<<"\n1)Enqueue";
        cout<<"\n2)Dequeue";
        cout<<"\n3)getFront";
        cout<<"\n4)getRear";
        cout<<"\n5)isFull";
        cout<<"\n6)isEmpty";
        cout<<"\n7)Exit";
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
                    x = Q.isFull();
                    cout<<x;
                    break;
            case 6: 
                    x = Q.isEmpty();
                    cout<<x;
                    break;
            case 7: 
                    exit(0);
            default:
                    cout<<"\nEnter correct choice!";
        }
    } while (ch!=7);
    return 0;
}