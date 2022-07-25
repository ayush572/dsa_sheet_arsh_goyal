#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left, *right;
    Node(int d)
    {
        val=d;
        left=NULL;
        right=NULL;
    }
};
int max_bin_tree(Node *root)
{
    int max_no;
    if(root==NULL)
        return INT_MIN;
    else if(root!=NULL)
    {
        max_no=max(max_bin_tree(root->left),max_bin_tree(root->right));
    }
    return max(max_no,root->val);
}
int main()
{
    Node *root=new Node(10);
    root->left=new Node(8);
    root->left->left=new Node(120);
    root->left->left->right=new Node(200);
    root->right=new Node(300);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    int maxi_no=max_bin_tree(root);
    cout<<"max no is: "<<maxi_no;
    return 0;
}