//size means the number of nodes in a binary tree.

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
int size_bin(Node *root)
{
    int nodes=0;
    if(root==NULL)
        return 0;
    else if(root!=NULL)
    {
        nodes=size_bin(root->left);
        nodes+=size_bin(root->right);
    }
    return nodes+1;
}
int main()
{
    Node *root=new Node(80);
    root->left=new Node(30);
    root->left->left=new Node(30);
    root->right=new Node(40);
    root->right->right=new Node(100);
    root->right->right->left=new Node(60);
    int size=size_bin(root);
    cout<<"size is: "<<size;
    return 0;
}