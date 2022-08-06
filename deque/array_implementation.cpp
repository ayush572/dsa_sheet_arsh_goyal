#include<bits/stdc++.h>
using namespace std;
class deq{
        int *arr,n,cnt,front,rear,tr;
        public:
        deq(int s){
                n=s;
                arr = new int[n];
                arr[n]={0};
                cnt=0;
                front=-1;
                rear=-1;
                tr=0;
        }
    void pushFront(int no);
    void pushRear(int no);
    void popFront();
    void popRear();
    int getFront();
    int getRear();
    int isFull();
    int isEmpty();
    int size();
};

//linear implementation
// void deq :: pushFront(int no)
// {
//         cout<<"\nCnt : "<<cnt;
//         if(cnt == n)
//         {
//                 cout<<"\nDeque full";
//         }
//         else
//         {
//                 for(int i=cnt;i>0;i--)
//                 {
//                         arr[i]=arr[i-1];
//                 }
//                 arr[0]=no;
//                 cnt++;
                
//         }
// }

//circular array implementation
void deq :: pushFront(int no)
{      
        if(cnt==n)
        {
                cout<<"\nNo more elements can be inserted";
        }
        else
        {
                if(front==-1)
                {
                        front=0;
                        rear=0;
                        cnt++;
                }
                else
                {
                        front = (front-1+n)%n;
                }
                arr[front]=no;
        }
}

//linear array implementation
// void deq :: pushRear(int no)
// {
//         cout<<"\nCnt : "<<cnt;
//         if(cnt == n)
//         {
//                 cout<<"\nDeque full";
//         }
//         else
//         {
//                 arr[cnt]=no;
//                 cnt++;
                
//         }
// }

//circular array implementation
void deq :: pushRear(int no)
{
        if(cnt == n)
        {
                cout<<"\nDeque full";
        }
        else
        {
                if(rear==0)
                {
                        rear=0;
                        front=0;
                }
                else
                {
                        rear=(rear+1)%n;
                        cnt++;
                }
                arr[rear]=no;       
        }
}
int deq :: getFront()
{
        return arr[front];
}
int deq :: getRear()
{
        return arr[rear];
}

//linear array implementation
// void deq :: popFront()
// {
//         if(cnt == 0)
//                 cout<<"\nElement cannot be popped from front!";
//         else
//         {
//                 for(int i=0;i<(cnt-1);i++)
//                 {
//                         arr[i]=arr[i+1];
//                 }
//                 cnt--;
//         }
        
// }

//circular array implementation
void deq :: popFront()
{
        if(cnt == 0)
                cout<<"\nElement cannot be popped from front!";
        else
        {
                if(front==rear)
                {
                        front=-1;
                        rear=-1;
                }
                else
                {
                        front=(front+1)%n;
                        tr--;
                }
                        
        }
        
}

//linear array implementation
void deq :: popRear()
{
       
        if(cnt==0)
                cout<<"\nNot possible to pop from rear!";
        else
        {
                cnt--;
                cout<<"\nElement popped from rear!";
        }
        
}

//circular array implementation
void deq :: popRear()
{
       
        if(cnt==0)
                cout<<"\nNot possible to pop from rear!";
        else
        {
                if(front==rear)
                {
                        front=-1;
                        rear=-1;
                }
                else
                {
                        
                }
        }
        
}

int deq :: isEmpty()
{
        if(cnt==0)
                return 1;
        else 
                return 0;
}
int deq :: isFull()
{
        if(cnt==(n-1))
                return 1;
        else 
                return 0;
}
int deq :: size(){
        return cnt;
}
int main()
{
    int n,ch,no,x;
    cout<<"\nEnter the size: ";
    cin>>n;
    deq d(n);
    do
    {
        cout<<"\n1)push front";
        cout<<"\n2)push rear";
        cout<<"\n3)popFront";
        cout<<"\n4)popRear";
        cout<<"\n5)getFront";
        cout<<"\n6)getRear";
        cout<<"\n7)isFull";
        cout<<"\n8)isEmpty";
        cout<<"\n9)size";
        cout<<"\n10)Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: 
                    cout<<"\nEnter number to be inserted : ";
                    cin>>no;
                    d.pushFront(no);
                    break;
            case 2: 
                    cout<<"\nEnter number to be inserted : ";
                    cin>>no;
                    d.pushRear(no);
                    break;
            case 3: 
                    d.popFront();
                    break;
            case 4: 
                    d.popRear();
                    break;
            case 5: 
                    x = d.getFront();
                    cout<<x;
                    break;
            case 6: 
                    x = d.getRear();
                    cout<<x;
                    break;
         case 7: 
                    x = d.isFull();
                    cout<<x;
                    break;
        case 8: 
                x = d.isEmpty();
                cout<<x;
                break;
         case 9: 
                    x = d.size();
                    cout<<x;
                    break;
            case 10: 
                    exit(0);
            default:
                    cout<<"\nEnter correct choice!";
        }
    } while (ch!=10);
    return 0;
}