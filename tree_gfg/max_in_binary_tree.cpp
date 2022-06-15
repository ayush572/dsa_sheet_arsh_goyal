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
    int tot_h=0;
    if(root==NULL)
        return 0;
    else if(root!=NULL)
    {
        tot_h=max(height(root->left),height(root->right));
        return tot_h+1;
    }
}
int main()
{
    Node *root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    int h=height(root);
    cout<<"height is: "<<h;
    return 0;
}