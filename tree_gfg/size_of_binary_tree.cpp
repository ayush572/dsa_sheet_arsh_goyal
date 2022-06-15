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
int height(Node *root)
{
    int nodes=0;
    if(root==NULL)
        return 0;
    else if(root!=NULL)
    {
        
    }
}
int main()
{
    Node *root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    int size=height(root);
    cout<<"height is: "<<size;
    return 0;
}