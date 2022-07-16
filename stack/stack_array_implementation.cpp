#include<iostream>
#include<vector>
using namespace std;

//we can even use a vector based one for the array or stack to grow/shrink dynamically
class Mystack{
    int *arr, n, top=-1;
    public: 
    Mystack (int size)
    {
        arr=new int[size];
        n=size;
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
        top++;
        arr[top]=val;
        cout<<"\nElement "<<val<<" pushed into the stack";
    }
    
}
void Mystack :: pop(){
   
    if(top==-1)
    {
        cout<<"\nUnderflow";
    }
    else
    {
        top--;
        cout<<"\nPopped!";
    }
}
int Mystack :: peek(){
    if(top==-1)
        return -1;
    return arr[top];
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
    Mystack S(10);
    S.push(5);
    S.push(15);
    S.push(25);
    cout<<"\nsize: "<<S.size();
    cout<<"\nTop element: "<<S.peek();
    S.pop();
    S.push(35);
    S.peek();
    cout<<"\nis the stack empty?: "<<S.isEmpty();
    return 0;
}