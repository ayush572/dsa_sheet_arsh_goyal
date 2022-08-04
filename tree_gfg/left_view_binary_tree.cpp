#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left, *right;
    Node(int d)
    {
        val = d;
        left = NULL;
        right = NULL;
    }
};


//recursive
void left_view_recur(Node *root, int lvl, int &max_lvl)
{
    if(root==NULL)
        return;
    if(max_lvl<lvl)
    {
        cout<<root->val<<" ";
        max_lvl=lvl;
    }
    left_view_recur(root->left,lvl+1,max_lvl);
    left_view_recur(root->right,lvl+1,max_lvl);
}

//iterative
void left_view(Node *root)
{
    if(root==NULL)
        return;
    queue<Node *> Q;
    int s=0,temp=-1;
    Q.push(root);
    s++;
    Node *curr;
    while(!Q.empty())
    {
        curr=Q.front();
        if(temp==-1)
        {
            cout<<curr->val<<" ";
            temp=1;
        }
        if(curr->left!=NULL)
        {
            Q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            Q.push(curr->right);
        } 
        Q.pop();
        s--;

        //means a particular level has finished
        if(s==0)
        {
            s=Q.size();
            temp=-1;
        }
    }
}
int main()
{
    int max_lvl=0;
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    // root->right->left->right=new Node(10);
    // root->left->right=new Node(50);
    // root->right->left = new Node(60);
    // root->right->right = new Node(60);
    // root->right->left->right = new Node(80);
    // root->right->right->right = new Node(80);
    cout<<"\nIterative solution: ";
    left_view(root);
    cout<<"\nRecursive solution: ";
    left_view_recur(root,1,max_lvl);
    return 0;
}