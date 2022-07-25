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
void inorder_iter(Node *root)
{
    stack<Node *> S;
    S.push(root);
    while (!S.empty())
    {
       while(root!=NULL)
       {
            root=root->left;
            if(root==NULL)
                break;
            S.push(root);
       }
       cout<<S.top()->val<<" ";
       root=S.top()->right;
       S.pop();
       if(root!=NULL)
        S.push(root);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->left->left = new Node(70);
    root->left->left->right = new Node(60);
    root->right = new Node(30);
    root->right->left = new Node(60);
    inorder_iter(root);
    return 0;
}