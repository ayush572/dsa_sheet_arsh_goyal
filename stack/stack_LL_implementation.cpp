#include<iostream>
#include<vector>
using namespace std;


struct Node{
    int val;
    Node *next;
    Node( int data)
    {
        val=data;
        next=NULL;
    }
};
//we can even use a vector based one for the array or stack to grow/shrink dynamically
class Mystack{
    int top=-1,n;

    //even here you have to define a Node pointer, i.e the head pointer
    Node *head;
    public: 
    Mystack(int size)
    {
        n=size;
        head=NULL;
    }
    void push(int val);
    void pop();
    int peek();
    int isEmpty();
    int size();
};
void Mystack :: push(int val){
    if(top==n-1)
    {
        cout<<"\noverflow";
    }
    else
    {
        if(top==-1)
        {
            top++;
            Node *temp=new Node(val);

            //this is very important as this will be the first element of LL or stack
            head=temp;
        }
        else
        {
            top++;
            Node *temp=new Node(val);
            temp->next=head;
            head=temp;
        }
        
        cout<<"\nElement "<<val<<" pushed into the stack";
    }
    
}
void Mystack :: pop(){
   
    if(top==-1)
    {
        cout<<"top: "<<top;
        cout<<"Underflow";
    }
    else
    {
        top--;
        Node *temp=head;
        head=head->next;
        cout<<"\n"<<temp->val<<" Popped!\n";
        delete temp;
        
    }
}
int Mystack :: peek(){
    if(top==-1)
        return -1;
    return head->val;
}
int Mystack :: isEmpty(){
    if(top==-1)
        return 1;
    return 0;
}
int Mystack :: size(){
    return top+1;
}
int main()
{
    Mystack S(5);
    S.push(5);
    S.push(15);
    S.push(25);
    cout<<"\nsize: "<<S.size();
    cout<<"\nTop element: "<<S.peek();
    S.pop();
    S.push(35);
    S.peek();
    cout<<"\nis the stack empty?: "<<S.isEmpty();
    S.push(40);
    S.push(45);
    S.push(50);
    S.pop();
    S.pop();

    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    S.push(50);
    cout<<"\nsize: "<<S.size();
    return 0;
}