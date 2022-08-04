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
//original idea was using the BFS


//this is by using the DFS - implemented self O(n) time 
// and O(n) space
void preorder_iter(Node *root)
{
    stack<Node *> S;
    if(root==NULL)
        return;
    S.push(root);
    while (!S.empty())
    {
       while(root!=NULL)
       {
            cout<<S.top()->val<<" ";
            root=root->left;
            if(root==NULL)
                break;
            S.push(root);
       }
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
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    preorder_iter(root);
    return 0;
}