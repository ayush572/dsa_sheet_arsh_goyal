#include<bits/stdc++.h>
using namespace std;
struct Node{
    int k;
    Node *left, *right;
    Node(int d)
    {
        k=d;
        left=NULL;
        right=NULL;
    }
};
void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->k<<"->";
        inorder(root->right);
    }
    return;
}
void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->k<<"->";
        inorder(root->left);
        inorder(root->right);
    }
    return;
}
void postorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        inorder(root->right);
        cout<<root->k<<"->";
    }
    return;
}
int main()
{
    Node *root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    inorder(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    postorder(root);
    return 0;
}